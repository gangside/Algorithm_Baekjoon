#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int witdhMax = 0, heightMax = 0;
    for(int i = 0; i < sizes.size(); i++){
        if(sizes[i][0] < sizes[i][1]){
            int temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
        if(sizes[i][0] > witdhMax){
            witdhMax = sizes[i][0];
        }
        if(sizes[i][1] > heightMax){
            heightMax = sizes[i][1];
        }
    }
    answer = witdhMax * heightMax;
    return answer;
}