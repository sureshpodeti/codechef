#include<iostream>

using namespace std;

int main(){
    int t,a,b,c,high,low, ans;
    cin >> t;

    while(t--){
        cin.ignore();
        cin >> a >> b >> c;

        if(a>b){high=a;low=b;}
        else {high=b;low=a;}

        if(high>c){
            if(low>c) ans = low;
            else ans = c;
        }else{
            if(low>c) ans = c;
            else ans = high;
        }
        cout << ans << endl;
    }


    return 0;
}
