#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> getBinary(int leng, int n){
    vector<int> ret;
    int cal = n;
    for(int i = 0; i < leng; i++){
        ret.push_back(cal % 2);
        cal = cal / 2;
    }
    reverse(ret.begin(), ret.end());
    return ret;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i = 0; i < n; i++){
        vector<int> t1 = getBinary(n, arr1[i]);
        vector<int> t2 = getBinary(n, arr2[i]);
        string s;
        for(int j = 0; j < t1.size(); j++){
            if(t1[j] == 0 && t2[j] == 0){
                s += " ";
            }
            else{
                s += "#";
            }
        }
        answer.push_back(s);
    }
    
    return answer;
}