#include<iostream>
using namespace std;


int main(){



    int T, N, K;

    cin >> T;

    while(T--){
        cin.ignore();
        cin >> N >> K;

        int A[N];
        for(int i=0;i<N;++i) cin >> A[i];

        string st = "";
        for(int i=0;i<N;++i){
            if(K-A[i]>=0){
                st = st + "1";
                K -= A[i];
            }
            else st = st+"0";
        }

        cout << st << endl;




    }
    return 0;
}
