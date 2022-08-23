#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int sum = 0;
    for(int i = 0; i <= t; i++)
    {
        for (int j = i; j <= t; j++)
        {
            sum += i + j;
        }
    }
    cout << sum;
}