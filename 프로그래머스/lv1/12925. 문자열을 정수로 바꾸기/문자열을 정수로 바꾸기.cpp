#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    if(s[0]=='-'){
        s.erase(s.begin());
        answer = stoi(s);
        answer *= -1;
    }
    else if(s[0]=='+')
    {
        s.erase(s.begin());
        answer = stoi(s);
    }
    else
    {
        answer = stoi(s);
    }
    
    return answer;
}