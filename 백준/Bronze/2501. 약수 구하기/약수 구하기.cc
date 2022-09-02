#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    int preCal[10000] = {0};
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            preCal[++cnt] = i;
    }
    cout << preCal[k];
}