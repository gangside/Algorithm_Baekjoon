#include <iostream>
using namespace std;

int e = 0, s = 0, m = 0;
void addYear()
{
    e = (e+1) % 15 == 0 ? 15 : (e+1) % 15;
    s = (s+1) % 28 == 0 ? 28 : (s+1) % 28;
    m = (m+1) % 19 == 0 ? 19 : (m+1) % 19;
}

int main()
{
    int E, S, M;
    cin >> E >> S >> M;
    
    int ret = 0;
    while (true)
    {
        addYear();
        ret++;
        if(e == E && s == S && m == M)
            break;
    }
    
    cout << ret;
}