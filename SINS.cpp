#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int T;
    cin >> T;

    long long int X,Y;
    while(T--){
        cin >> X >> Y;
        cout << (__gcd(X, Y)*2) << endl;

    }

    return 0;
}
