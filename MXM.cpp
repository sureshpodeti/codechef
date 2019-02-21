#include<iostream>
#include<cmath>
using namespace std;

int mxmCompute(int A[], int n){
    // define two arrays
    int L[n-1], R[n-1];

    //initialize the L, R arrays
    L[0] = A[0];
    R[n-2] = A[n-1];

    //fill the remaining
    for(int i=1;i<n-1;++i)
        L[i] = L[i-1]+A[i];

    for(int j=n-3;j>=0;--j)
        R[j] = R[j+1] + A[j+1];


    int ans=0, value=-1;
    for(int i=0;i<n-1;++i)
        if(L[i]*R[i]>value){value = L[i]*R[i];ans=i+1;} ;

    return ans;

}
int main(){
    int t,n,k;
    cin >> t;

    while(t--){
        cin.ignore();
        cin >> n >> k;

        int A[n];
        for(int i=0;i<n;++i) cin >> A[i];

        //update array values
        for(int i=0;i<n;++i) A[i] = int(pow(k,A[i]));

        cout << mxmCompute(A, n) << endl;

    }
    return 0;
}
