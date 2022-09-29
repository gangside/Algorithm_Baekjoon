#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int diff = 'A' - 'a';
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            cnt = 0;
            answer += s[i];
            continue;
        }
        
        if(cnt % 2 == 0){
            if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] += diff;
            }
        }
        else{
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] -= diff;
            }
        } 
        
        answer += s[i];
        cnt++;
    }
    return answer;
}