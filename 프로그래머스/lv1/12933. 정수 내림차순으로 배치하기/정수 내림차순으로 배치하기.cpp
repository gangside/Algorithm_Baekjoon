#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    string strs = to_string(n);
    sort(strs.begin(), strs.end(), greater<>());
    return stoll(strs);
}