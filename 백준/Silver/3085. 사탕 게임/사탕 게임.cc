#include <iostream>
#include <algorithm>
using namespace std;

int maxCheck(char arr[51][51], int N)
{
    int horArr[51][51];
    int verArr[51][51];
    int max = 0;
    
    for (int y = 0; y < N; y++)
    {
        for(int x = 0; x < N; x++)
        {
            if(x > 0 && arr[y][x] == arr[y][x-1])
                horArr[y][x] = horArr[y][x-1] + 1;
            else
                horArr[y][x] = 1;
            
            if(y > 0 && arr[y][x] == arr[y-1][x])
                verArr[y][x] = verArr[y-1][x] + 1;
            else
                verArr[y][x] = 1;

            if(max < verArr[y][x])
                max = verArr[y][x];
            if(max < horArr[y][x])
                max = horArr[y][x];
        }
    }
    return max;
}


int main()
{
    int N;
    cin >> N;
    
    char arr[51][51];
    int max = 0;
    
    for (int y = 0; y < N; y++)
    {
        for(int x = 0; x < N; x++)
        {
            cin >> arr[y][x];
        }
    }

    for (int y = 0; y < N; y++)
    {
        for(int x = 0; x < N; x++)
        {
            if(x + 1 < N)
            {
                swap(arr[y][x], arr[y][x+1]);
                int horVal = maxCheck(arr, N);
                if( max < horVal)
                    max = horVal;
                swap(arr[y][x], arr[y][x+1]);
            }

            if(y+1 < N)
            {
                swap(arr[y][x], arr[y+1][x]);
                int verVal = maxCheck(arr, N);
                if( max < verVal)
                    max = verVal;
                swap(arr[y][x], arr[y+1][x]);
            }
        }
    }
    cout << max;
}