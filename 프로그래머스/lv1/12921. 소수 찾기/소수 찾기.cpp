#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int checks[1000001];
    checks[0] = 1;
    checks[1] = 1;
    for(int i = 2; i < 1000001; i++){
       if(checks[i] == 1)
           continue;
        for(int j = i + i; j < 1000001; j += i){
            checks[j] = 1;
        }
    }
    
    for(int i = 0; i <= n; i++){
        if(checks[i] == 0) answer++;
    }
    
    return answer;
}