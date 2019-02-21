#include<iostream>

using namespace std;

int main(){
    int t,n,k, ans;
    cin >>t;

    while(t--){
        cin.ignore();
        cin >> n >> k;
        ans = n%2;
        for(int i=3;i<=k;++i)
            if(n%i>ans) ans = n%i;
        cout << ans << endl;

    }

    return 0;
}
