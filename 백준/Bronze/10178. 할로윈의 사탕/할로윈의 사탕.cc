#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for ( int i = 0; i < t; i++)
    {
        int c, v;
        cin >> c >> v;

        int shar = c / v;
        int rem = c % v;

        printf("You get %d piece(s) and your dad gets %d piece(s).\n", shar, rem);
    }
}