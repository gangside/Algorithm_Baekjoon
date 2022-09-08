#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool> btns(10, false);

bool isNormalNums(int num)
{
    string s = to_string(num);
    for (char i : s)
        if(btns[i -'0'])
            return false;
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    
    int broken;
    for (int i = 0; i < m; i++)
    {
        cin >> broken;
        btns[broken] = true;
    }

    int minimum = abs(n - 100);
    for(int i = 0; i < 1000000; i++)
    {
        if(isNormalNums(i))
        {
            int cnt = abs(n-i) + to_string(i).length();
            minimum = min(minimum, cnt);
        }
    }

    cout << minimum;
}