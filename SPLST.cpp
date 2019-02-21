
#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;


    long long int  a, b, c, x,y;

    while(T--){
        cin >> a >> b >> c >> x >> y;

        if(x>y) {
            //swap x,y
            x = x+y;
            y = x-y;
            x = x-y;
        }

        if(a+b+c==x+y && (y<=a+b || y<= b+c || y<=a+c))
            cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}
