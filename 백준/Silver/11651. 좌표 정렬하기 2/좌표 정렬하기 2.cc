#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    if(a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}

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

    sort(coordList.begin(), coordList.end(), compare);
    
    for(int i = 0; i < coordList.size(); i++)
    {
        cout << coordList[i].first << " " << coordList[i].second << "\n";
    }
}