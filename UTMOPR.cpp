#include<iostream>

using namespace std;

int main(){
    int T, N, K;
    cin >> T;

    while(T--){
        cin >> N >> K;
        long long int S=0,X;
        for(int i=0;i<N;++i) {
            cin >> X;
            S += X;
        }

        if(K==1){
          if(S%2==0) cout << "even" << endl;
            else cout << "odd" << endl;
        }else cout << "even" << endl;

    }

    return 0;
}
