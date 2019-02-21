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

        // time complexity: O((N-K+1)*(K-1))~ O(N*K)
        int l = N-K+1;
        int table[l];
        for(int i=l-1;i>=0;--i){
                int s = A[i+K-1];
                for(int j=i+K-2;j>=i;--j){
                    s += A[j];
                }

                table[i] = s;

        }

        int ans = 0;
        // find the maximum value
        for(int i=0;i<l;++i)
            ans = max(ans, table[i]);


        cout  << ans << endl;




    }


    return 0;
}



