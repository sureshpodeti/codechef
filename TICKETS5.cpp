#include<iostream>

using namespace std;


int main(){
    int T;
    cin >> T;


    string st;
    while(T--){
        cin >> st;
        int flag = 1;
        if(st[0]==st[1])
            flag = 0;
        else{
            string s = st.substr(0,2);
            for(int i=2;i+2<=st.length();i=i+2){
                if(s!=st.substr(i,2)){
                    flag = 0;
                    break;
                }
            }
        }

        if(st.length()%2!=0){
                if(st[st.length()-1] == st[st.length()-2] )
                    flag = 0;

        }

        cout << ((flag)?"YES":"NO") << endl;

        }

    return 0;
}
