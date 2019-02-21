#include<iostream>

using namespace std;

int main(){
    int t,n;
    cin >> t;

    string colors;
    int red, blue, green, sz, ans;
    while(t--){
        cin.ignore();
        cin >> n;

        cin >> colors;

        red=blue=green=0;
        sz = colors.length();
        for(int i=0;i<sz;++i){
            if(colors[i]=='R') ++red;
            else if(colors[i]=='G') ++green;
            else ++blue;
        }

        int x = green+blue;
        int y = red+blue;
        int z = red+green;

        ans = (x<y)?x:y;
        ans = (ans<z)?ans:z;

        cout << ans << endl;


    }
    return 0;
}
