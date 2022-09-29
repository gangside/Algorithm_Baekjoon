#include <iostream>

using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    
    for(int i = 0; i < b; i++){
        string s;
        for(int j = 0; j < a; j++){
            s += "*";
        }
        cout << s << "\n";
    }
    return 0;
}