#include<iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    int A[N];
    for(int i=0;i<N;++i) cin >> A[i];

    int B[N+1] = {0};

    for(int i=0;i<N;++i) B[A[i]]++;

    for(int i=0;i<=N;++i)
        if(B[i]==0) cout << i << " ";
    cout << endl;


    return 0;
}
