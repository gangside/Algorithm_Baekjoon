#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for ( int i = 0; i < t; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;

        int sum = t1 + t2;
        printf("Case %d: %d\n", i+1, sum);
    }
}