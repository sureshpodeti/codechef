#include<iostream>

using namespace std;

int main(){
    int T, N;
    cin >> T;

    string st;
    while(T--){
        cin.ignore();
        cin >> st;

        N = st.length();

        int valid = 1;
        for(int i=0;i<N;++i){
                if(st[i]=='C'){
                   if(!(i-1<0 || st[i-1]=='C')) {valid = 0; break;}
                }else if(st[i]=='E'){
                    if(!(i-1<0 || st[i-1]=='E' || st[i-1]=='C')) {valid = 0; break;}
                }else if(st[i]=='S'){
                 if(!(i-1<0 || st[i-1]=='S'|| st[i-1]=='C' || st[i-1]=='E')) {valid = 0; break;}
                }

        }

        if(valid) cout << "yes" << endl;
        else cout << "no" << endl;

    }
    return 0;
}
