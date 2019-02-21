#include<iostream>

using namespace std;

int main(){
    int t, n, m, k, diff;
    cin >> t;

    while(t--){
        cin.ignore();
        cin >> n >> m >> k;
        if(n>m) diff = (k>n-m)?0: n-m-k;
        else diff = (k>m-n)?0:m-n-k;
        cout << diff << endl;
    }

    return 0;
}
