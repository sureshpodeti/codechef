#include<iostream>

using namespace std;

int main(){
    int T, N;
    cin >> T;

    while(T--){
        cin.ignore();
        cin >> N;

        int A[N];

        for(int i=0;i<N;++i) cin >> A[i];

        int sum=0;
        for(int i=0;i<N;++i) sum += A[i];

        if(sum%2==0) cout << "NO" << endl;
        else cout << "YES" << endl;

    }
    return 0;
}
