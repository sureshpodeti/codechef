#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;

    string st, stNew;
    while(T--){
        cin.ignore();

        cin >> st;

        int ans = 0;
        for(int i=0;i<st.length();++i)
            if(i-1>=0&& st[i]=='>'){
                if(st[i-1] == '<') ans += 1;
            }
        cout << ans << endl;

    }

    return 0;

}
