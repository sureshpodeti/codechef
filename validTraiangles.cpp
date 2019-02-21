#include<iostream>
using namespace std;

int main(){
    int a, b, c,t;
    cin >> t;
    while(t--){
        cin.ignore();
        cin >> a >> b >> c;
        cout << ((a+b+c==180)?"YES": "NO") << endl;
    }

    return 0;
}
