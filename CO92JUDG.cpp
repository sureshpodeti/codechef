#include<iostream>

using namespace std;

int main(){
    int T, N;
    cin >> T;

    while(T--){
        cin.ignore();
        cin >> N;

        int A[N], B[N];
        for(int i=0;i<N;++i) cin >> A[i];
        for(int i=0;i<N;++i) cin >> B[i];

        int ASum=0, AMax=0, BSum = 0, BMax=0;
        for(int i=0;i<N;++i){
            ASum += A[i];
            BSum += B[i];
            if(AMax<A[i]) AMax = A[i];
            if(BMax<B[i]) BMax = B[i];
        }
        if((ASum-AMax)==(BSum-BMax)) cout << "Draw" << endl;
        else if((ASum-AMax)>(BSum-BMax)) cout << "Bob" << endl;
        else cout << "Alice" << endl;

    }

    return 0;
}



