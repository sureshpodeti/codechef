#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int A[n];
    for(int i=0;i<n;++i) cin >> A[i];

    int even=0, odd=0;
    for(int i=0;i<n;++i)
        if(A[i]%2==0) ++even;
        else ++ odd;
    if(even>odd) cout << "READY FOR BATTLE" << endl;
    else cout << "NOT READY" << endl;


    return 0;
}
