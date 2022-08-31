#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> coordList;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        coordList.emplace_back(x, y);
    }

    sort(coordList.begin(), coordList.end());
    
    for(int i = 0; i < coordList.size(); i++)
    {
        cout << coordList[i].first << " " << coordList[i].second << "\n";
    }
}