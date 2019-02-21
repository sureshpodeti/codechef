#include<iostream>

using namespace std;

int main(){
    int T, N, U,D;
    cin >> T;

    while(T--){
        cin >> N >> U >> D;

        int A[N];
        for(int i=0;i<N;++i) cin >> A[i];

        int parachute = 1, index=0;
        while(index<N){
                if(index+1<N && A[index]==A[index+1]){
                    ++index;
                }else if(index+1<N && A[index]<A[index+1]){
                    if(A[index+1]-A[index]<=U) ++index;
                    else break;

                }else{

                    if(index+1<N && A[index]-A[index+1]<=D) ++index;
                    else if(parachute) {parachute=0;++index;}
                    else break;

                }
        }

        cout << ((index==N)?N:(index+1)) << endl;


    }
    return 0;
}
