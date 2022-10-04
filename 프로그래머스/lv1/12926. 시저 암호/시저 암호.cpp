#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i = 0; i < s.size(); i++){
        int val = s[i];
        if(val == ' ')
            continue;
        if(val <= 'z' && val >= 'a'){
            val += n;
            if(val > 'z'){
                val = 'a' + val - 'z' - 1;
            }
        }
        else{
            val += n;
            if(val > 'Z'){
                val = 'A' + val - 'Z' - 1;
            }
        }
        s[i] = val;
    }
    
    answer = s;
    return answer;
}