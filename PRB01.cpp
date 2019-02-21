#include<iostream>

using namespace std;

string isPrime(int n){
    if(n==1) return "no";

    bool prime = true;
    for(int i=2;i<n;++i)
        if(n%i==0) {prime = false;break;};

    return (prime)?"yes":"no";

}
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin.ignore();
        cin >> n;
        cout << isPrime(n) << endl;
    }

    return 0;
}
