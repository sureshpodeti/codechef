#include<iostream>
using namespace std;

int main(){
    int T, N, a,b;
    cin >> T;

    while(T--){
            cin.ignore();
            cin >> N >> a >> b;

            long long int A[N];
            for(int i=0;i<N;++i) cin >> A[i];

            int bobCount=0, aliceCount=0, common=0;
            for(int i=0;i<N;++i){
                if(A[i]%a==0 && A[i]%b==0) common=1;
                if(A[i]%a==0 && A[i]%b!=0) ++bobCount;
                if(A[i]%b==0 && A[i]%a!=0) ++aliceCount;
            }


            if(a==b){
                if(bobCount>=aliceCount) cout << "BOB" << endl;
                else cout << "ALICE" << endl;
            }else{
                if(common){
                        if(bobCount>=aliceCount) cout << "BOB" << endl;
                        else cout << "ALICE" << endl;

                }else{
                    if(bobCount>aliceCount) cout << "BOB" << endl;
                    else cout << "ALICE" << endl;

                }

            }




    }
    return 0;
}
