#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int sum = 1, cnt = 1;
    while (n > 1)
    {
        sum += 6 * cnt;
        cnt++;
        if(n <= sum) break;
    }
    cout << cnt;
}