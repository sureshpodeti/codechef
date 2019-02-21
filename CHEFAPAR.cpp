#include<iostream>
using namespace std;

int main(){
    int T, N;
    cin >> T;

    while(T--){
        cin.ignore();
        cin >> N;

        int A[N];
        for(int i=0;i<N;++i) cin >> A[i];

        int paid=0, due=0;
        for(int i=0;i<N;++i){
            if(A[i]==1){
                ++paid;
                if(due>0) ++due;
            }else ++due;
        }

        long long int ans = (N-paid)*1000 + due*100;
        cout << ans << endl;


    }

    return 0;
}
