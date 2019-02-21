#include<iostream>
#include<map>
using namespace std;

int main(){
    int t,n;
    string s1, s2;

    cin >> t;
    while(t--){
        cin.ignore();
        cin >> s1 >> s2;

        n = s1.length();
        int t[3] = {0,0,0};
        for(int i=0;i<n;++i)
            if(s1[i]==s2[i] && s1[i]=='?') t[2] += 1;
            else if(s1[i]!=s2[i] && (s1[i]=='?' || s2[i]=='?')) t[1] += 1;
            else if(s1[i]!=s2[i]) t[0] += 1;

        cout << t[0] << " " << t[0]+t[1]+t[2] << endl;



    }

    return 0;
}
