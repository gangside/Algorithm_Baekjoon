#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string order;
    stack<int> st;
    
    for(int i = 0; i < n; i++)
    {
        cin >> order;

        if(order == "push")
        {
            int value;
            cin >> value;
            st.push(value);
        }
        else if(order == "pop")
        {
            if (st.empty())
            {
                cout << -1;
            }
            else
            {
                int val = st.top();
                st.pop();
                cout << val;
            }
            cout << "\n";
        }
        else if(order == "size")
        {
            cout << st.size();
            cout << "\n";
        }
        else if(order == "empty")
        {
            cout << (int)st.empty();
            cout << "\n";
        }
        else if(order == "top")
        {
            if(st.empty())
                cout << -1;
            else
                cout << st.top();
            cout << "\n";
        }
    }
}