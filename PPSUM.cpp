#include<iostream>

using  namespace std;

int main(){
    int t, d, n, x;
    cin >> t;

    while(t--){
            cin.ignore();
            cin >> d >> n;
            x = n;
            for(int i=0;i<d;++i)
                x = x*(x+1)/2;
            cout << x << endl;
    }
    return 0;
}
