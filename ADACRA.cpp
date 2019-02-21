#include<iostream>

using namespace std;

int main(){
    int T, U, D;
    cin >> T;

    string s;

    while(T--){
        cin.ignore();
        cin >> s;

        U = D = 0;
        for(int i=0;i<s.length(); ++i){
            if(s[i]=='U'){
                ++U;
                while(i<s.length() && s[i]!='D') ++i;
                --i;
            }
            if(s[i]=='D'){
                ++D;
                while(i< s.length() && s[i]!='U') ++i;
                --i;
            }

        }

        cout << min(U,D) << endl;

    }
    return 0;
}
