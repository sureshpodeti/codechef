#include<iostream>
#include<limits.h>
using namespace std;


long long int computation(long long int a, long long int b){
    long long int c;
     if(a==b) c = a;
        else {
            if(b%a==0) c = b;
            else c = a*b;
        }
    return c;

}
int main(){
    int T, N;
    cin >> T;

    while(T--){
        cin >> N;

        long long int A[N];
        for(int i=0;i<N;++i) cin >> A[i];

        long long int ans= INT_MAX;
        for(int i=0;i<N;++i){
            for(int j=i+1;j<N;++j){
                ans = min(ans, computation(A[i], A[j]));
            }
        }


        cout << ans << endl;

    }

    return 0;
}
