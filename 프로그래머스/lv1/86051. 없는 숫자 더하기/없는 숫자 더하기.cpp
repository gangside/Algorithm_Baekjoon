#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;

    for(int i = 0; i < 10; i++)
    {
        bool passed = false;
        
        for(int j = 0; j < numbers.size(); j++){
            if(i == numbers[j])
                passed = true;
        }
        
        if(!passed)
            answer += i;
    }
    
    return answer;
}