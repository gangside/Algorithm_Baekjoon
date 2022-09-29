#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int min = 0, index = 0;
    for(int i = 0; i < arr.size(); i++){
        if(i == 0)
            min = arr[i];
        
        if(arr[i] < min){
            min = arr[i];
            index = i;
        }
    }
    
    arr.erase(arr.begin()+index);
    
    if(arr.empty()){
        arr.push_back(-1);
    }
    
    return arr;
}