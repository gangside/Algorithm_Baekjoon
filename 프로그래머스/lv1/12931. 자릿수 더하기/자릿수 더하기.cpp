#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string ns = to_string(n);
    
    for(int i = 0; i < ns.size(); i++){
        char v = ns[i];
        answer += atoi(&v);
    }
    
    cout << ns[0] << endl;

    return answer;
}