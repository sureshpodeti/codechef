#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int T, N,X;
    cin >> T;

    while(T--){
        cin.ignore();
        cin >> N >> X;

        int A[N];
        for(int i=0;i<N;++i) cin >> A[i];

        sort(A, A+N);

        if(A[N-1]>=X) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}
