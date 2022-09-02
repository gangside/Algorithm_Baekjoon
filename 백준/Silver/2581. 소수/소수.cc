#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> make_che(int max)
{
    vector<int> ret(max+2, 1);
    ret[0] = 0;
    ret[1] = 0;
    for (int i = 2; i <= sqrt(max); i++)
    {
        if(ret[i] == 0)
            continue;
        for (int j = i + i; j <= max; j += i)
            ret[j] = 0;
    }
    return ret;
}

int main()
{
    int m, n;
    cin >> m >> n;

    vector<int> che = make_che(n);

    int sum = 0;
    int first = -1;
    
    for (int i = m; i <= n; i++)
    {
        if(che[i] == 1)
        {
            if(first == -1)
                first = i;
            sum += i;
        }
    }

    if (first == -1)
        cout << first;
    else
        cout << sum << "\n" << first;
}