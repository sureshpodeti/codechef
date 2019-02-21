#include<iostream>
using namespace std;

int main(){
    int T,N;
    cin >> T;

    while(T--){
        cin.ignore();
        cin >> N;

        long long int A[N];
        for(int i=0;i<N;++i) cin >> A[i];

        int zero=0, ones=0, others=0;
        for(int i=0;i<N;++i){
            if(A[i]==0) ++zero;
            else if(A[i]==1) ++ones;
            else ++others;
         }

         if(others>1) cout << "no" << endl;
         else cout << "yes" << endl;


    }
    return 0;
}
