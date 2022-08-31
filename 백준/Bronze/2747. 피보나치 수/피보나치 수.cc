#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int preSum[46];
    for (int i = 0; i < 46; i++)
    {
        if(i < 2)
            preSum[i] = i;
        else
            preSum[i] = preSum[i-1] + preSum[i-2];
    }
    cout << preSum[n];
}