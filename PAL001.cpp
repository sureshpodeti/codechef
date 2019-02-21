#include<iostream>

using namespace std;

string palindrome(string  st){
    int n = st.length();

    int i=0,j=n-1;
    bool p = true;
    while(i<j){
        if(st[i]!=st[j]) {p=false;break;}
        ++i;
        --j;
    }
    return (p)?"wins":"losses";
}
int main(){
    int t,n;

    cin >> t;
    while(t--){
        cin.ignore();
        cin >> n;

        cout << palindrome(to_string(n)) << endl;

    }
    return 0;
}
