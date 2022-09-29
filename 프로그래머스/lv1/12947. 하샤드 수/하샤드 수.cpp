#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int v = x;
    int sum = 0;
    while (v != 0)
    {
        sum += v % 10;
        v /= 10;
    }
    bool answer = x % sum == 0;
    return answer;
}