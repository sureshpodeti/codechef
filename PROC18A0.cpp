#include<iostream>

using namespace std;


int main(){
    int T, N, K;
    cin >> T;

    while(T--){
        cin >> N >> K;

        int A[N];
        for(int i=0;i<N;++i)
            cin >> A[i];

      // time complexity: O(N), space complexity: O(N)
        int table[N];
        table[0] = A[0];
        for(int i=1;i<N;++i)
            table[i] = A[i] + table[i-1];

        int ans = table[K-1];
        for(int i=K;i<N;++i)
            ans = max(ans, (table[i]-table[i-K]));
        cout << ans << endl;

    }


    return 0;
}



