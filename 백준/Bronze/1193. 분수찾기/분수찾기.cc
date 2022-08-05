#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int l, r;
    int line = 0, end = 0;

    while (x > end)
    {        
        line++;
        end += line;
    }

    int diff = end - x;
    if(line % 2 == 0)
    {       
        l = line - diff;
        r = diff + 1;
    }
    else
    {
        l = diff + 1;
        r = line - diff;
    }
    
    printf("%d/%d", l, r);
}