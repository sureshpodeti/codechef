#include<iostream>
#include<limits.h>
using namespace std;

long long int minProduct(int A[], int n, int k){
    long long int B[n];
    //initialize each element to INT_MAX
    // first one to itself
    B[0] = A[0];
    for(int i=1;i<n;++i) B[i] = INT_MAX;

    for(int i=1;i<n;++i){
            int j = i-1;
            while(j>=0 && i-j<=k){
                if(B[j]*A[i] < B[i]) B[i] = B[j]*A[i];
                --j;
            }

    }

    return B[n-1]%1000000007;

}

int main(){
    int N, K;

    cin >> N >> K;
    int A[N];
    for(int i=0;i<N;++i) cin >> A[i];

    cout << minProduct(A, N, K) << endl;
    return 0;
}
