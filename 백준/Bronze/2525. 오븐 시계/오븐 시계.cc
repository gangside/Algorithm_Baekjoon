#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int h, m, d;
    cin >> h >> m >> d;

    int total = h * 60 + m + d;
    int hh = total / 60 % 24;
    int mm = total % 60;

    printf("%d %d", hh, mm);
}