#include<iostream>

using namespace std;

int main(){
    int T, N, X, S, A, B;
    cin >> T;

    while(T--){
        cin >> N >> X >> S;

        while(S--){
            cin >> A >> B;
            if(A==X){
                X = B;
            }else if(B==X) X = A;
        }

        cout << X << endl;

    }
    return 0;
}
