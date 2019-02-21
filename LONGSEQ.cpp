#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    string st;
    int ones, zeros, n;
    while(t--){
        cin.ignore();
        cin >> st;
        n = st.length();
        ones = zeros = 0;
        for(int i=0;i < n;++i)
            if(st[i]=='0') ++zeros;
            else ++ones;
        if(ones == 1 || zeros==1) cout << "Yes" << endl;
        else cout << "No" << endl;

    }

    return 0;
}
