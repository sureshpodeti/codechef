#include<iostream>

using namespace std;

int compute(int a, int b){
    if(b==0) return a;
    if(a==b) return a;
    return (a>b)?compute(b,a%b):compute(a, b%a);
}

void gcd(int A[], int n){
    int x = compute(A[0],A[1]);
    for(int i=2;i<n;++i){
        x = compute(x,A[i]);
    }


    for(int i=0;i<n;++i) cout << A[i]/x << " ";
    cout << endl;
 }
int main(){
    int t,n;
    cin >> t;

    while(t--) {
         cin >> n;
         int A[n];
         for(int i=0;i<n;++i) cin >> A[i];

         gcd(A, n);
    }


    return 0;
}
