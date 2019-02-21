#include<iostream>
using namespace std;

int main(){
    int t,n;
    string s1, s2;

    cin >> t;
    while(t--){
        cin.ignore();
        cin >> s1 >> s2;

        n = s1.length();
        bool status = true;
        for(int i=0;i<n;++i)
            if(s1[i]!=s2[i] && (s1[i]!='?' && s2[i]!='?')) {status=false;break;}


        cout << ((status)?"Yes":"No") << endl;



    }

    return 0;
}

