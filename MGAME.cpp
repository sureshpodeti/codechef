#include<iostream>

using namespace std;
int main(){
    int T, N, P;
    cin >> T;

    while(T--){
        cin.ignore();
        cin >> N >> P;

        // (((N mod i) mod j) mod k) mod N
        // i,j,k values range 1 to P

        // for i
        int maxModI=0, counterI=0;
        for(int i=1;i<=P;++i){
            int t = N%i;
            if(t>maxModI) maxModI = t;
        }






    }
    return 0;
}
