#include <iostream>
using namespace std;

int main()
{
    int m, d;
    cin >> m >> d;

    string dayName[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"}; 
    int daysOfMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays = 0;
    
    for (int i = 0; i < m-1; i++)
        totalDays += daysOfMonth[i];
    totalDays += d;
    
    int remainDays = totalDays % 7;
    cout << dayName[remainDays];
}