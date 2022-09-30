#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;

    vector<int> cals;
    int cal = n;
    while(cal > 2){
        cals.push_back(cal % 3);
        cal = cal / 3;
    }
    cals.push_back(cal);
    
    for(int i = 0; i < cals.size(); i++){
        answer += cals[i] * pow(3, cals.size()-1-i);
    }
    
    return answer;
}