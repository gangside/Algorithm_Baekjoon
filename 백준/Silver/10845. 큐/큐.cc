#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string order;
    queue<int> q;
    
    for(int i = 0; i < n; i++)
    {
        cin >> order;

        if(order == "push")
        {
            int value;
            cin >> value;
            q.push(value);
        }
        else if(order == "pop")
        {
            if (q.empty())
            {
                cout << -1;
            }
            else
            {
                int val = q.front();
                q.pop();
                cout << val;
            }
            cout << "\n";
        }
        else if(order == "size")
        {
            cout << q.size();
            cout << "\n";
        }
        else if(order == "empty")
        {
            cout << (int)q.empty();
            cout << "\n";
        }
        else if(order == "front")
        {
            if(q.empty())
                cout << -1;
            else
                cout << q.front();
            cout << "\n";
        }
        else if(order == "back")
        {
            if(q.empty())
                cout << -1;
            else
                cout << q.back();
            cout << "\n";
        }
    }
}