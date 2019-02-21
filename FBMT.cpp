#include<iostream>
using namespace std;
int main(){
    int T, N;
    cin >> T;


    while(T--){
        cin >> N;
        string inStr;
        string teamA="", teamB="";
        int a=0, b=0;
        while(N--){
            cin.ignore();
            cin >> inStr;

            if(teamA=="") teamA = inStr;
            else if(teamB=="" && teamA!=inStr) teamB = inStr;

            if(teamA==inStr) ++a;
            else ++b;
        }

        if(a==b) cout << "Draw" << endl;
        else if(a>b) cout << teamA << endl;
        else cout << teamB << endl;

    }

    return 0;
}
