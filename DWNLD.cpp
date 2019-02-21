#include<iostream>

using namespace std;

int main(){
    int TC, N, K, T, D, td;

    cin >> TC;

    while(TC--){
        cin.ignore();
        cin >> N >> K;

        td = 0;

        while(N--){
            cin.ignore();
            cin >> T >> D;
            if(K>0){
                if(K-T<0){td += (T-K)*D;K=0;}
                else if(K-T==0) K=0;
                else K -= T;
            }
            else td += T*D;
        }
        cout << td << endl;

    }
    return 0;
}
