#include<iostream>

using namespace std;

int compute(string st){
    int n = st.length();

    int a = 0 , b=0;
    for(int i=0;i<n;++i)
        if(st[i]=='a') ++a;
        else ++b;

    return (a>b)?b:a;
}
int main(){
    int t;
    string st;
    cin >> t;

    while(t--){
        cin.ignore();
        cin >> st;
        cout << compute(st) << endl;
    }
    return 0;
}
