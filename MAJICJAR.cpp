#include<iostream>


using namespace std;

int main(){
    int T, N;
    cin >> T;

    long long int a=0, S,b;
    while(T--){
        cin >> N;
        S = 0;
        for(int i=0;i<N;++i){
            cin >> b;
            S +=  b;
        }

        cout << (S-N+1) << endl;
    }


    return 0;
}
