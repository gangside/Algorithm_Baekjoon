#include <iostream>
using namespace std;

int main()
{
    int min = 100;
    int sum = 0;
    int input;
    
    for(int i = 0; i < 7; i++)
    {
        cin >> input;
        bool isOdd = input % 2 != 0;
        if(isOdd)
        {
            sum += input;
            
            if(input < min)
                min = input;
        }
    }

    if(min == 100)
        cout << -1;
    else
        cout << sum << "\n" << min << "\n";
}