#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

int main(){
    int T, N, ans;
    cin >> T;

    while(T--){
        cin.ignore();
        cin >> N;

        int A[N];
        for(int i=0;i<N;++i) cin >> A[i];

        ans = INT_MAX;

        sort(A, A+N);

        for(int i=0;i<N-1;++i)
            if(A[i+1]-A[i]<ans) ans = A[i+1] - A[i];

        cout << ans << endl;

    }
    return 0;
}
