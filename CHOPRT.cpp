#include<iostream>

using namespace std;

int main(){
    int t,a,b;
    cin >> t;
    char op;
    while(t--){
        cin.ignore();
        cin >> a >> b;
        if(a>b) op = '>';
        else if(a<b) op = '<';
        else op = '=';

        cout << op << endl;
    }
    return 0;
}
