#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a == b && b == c && c == a)
    {
        cout << 10000 + a * 1000;
    }
    else if(a == b || b == c || c == a)
    {
        int same = a == b ? a : c;
        cout << 1000 + same * 100;
    }
    else
    {
        int max = a > b ? a : b;
        max = max > c ? max : c;
        cout << 100 * max;
    }
}