#include<iostream>
using namespace std;

long minMax(int A[], int n){
    long value = 1e6;
    for(int i=0;i<n;++i)
        if(value > A[i]) value = A[i];
    return value*(n-1);
}


int main(){
    int t,n;
    cin >> t;

    while(t--){
        cin.ignore();
        cin >> n;

        int A[n];
        for(int i=0;i<n;++i) cin >> A[i];

        cout << minMax(A, n) << endl;
    }

    return 0;
}
