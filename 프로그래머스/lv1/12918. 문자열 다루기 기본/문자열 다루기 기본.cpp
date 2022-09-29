#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    for(int i = 0; i < s.size(); i++){
        if(s.size() == 4 || s.size() == 6){}
        else{
            answer = false;
            break;
        }

        if(s[i] >= '0' && s[i] <= '9'){}
        else{
            answer = false;
            break;
        }
    }
    return answer;
}