#include<iostream>

using namespace std;

int main(){
    int T, N, S, J;
    cin >> T;

    while(T--){
        cin >> N;

        int answer = 0;
        while(N--){
                cin >> S >> J;
                if(J-S>5) ++answer;
        }
        cout << answer << endl;
    }
    return 0;
}
