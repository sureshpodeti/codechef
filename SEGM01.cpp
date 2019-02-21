#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;

    string  st;
    while(T--){

        cin.ignore();
        cin >> st;

        int N = st.length(), i=0, counter=0;

        while(i<N){

            if(st[i]=='1'){
                ++ counter;
                while(i<N && st[i]!='0') ++i;
            }
            if(counter>1) break;
            ++i;
        }

        if(counter==1) cout << "YES" << endl;
        else  cout << "NO" << endl;

    }
    return 0;
}
