#include<iostream>
#include<map>
using namespace std;


int main(){
    int T, N;
    cin >> T;

    string A[9] = {"SL", "LB", "MB", "UB", "LB", "MB", "UB", "SU", "SU"};

    map<int, int> m;
    m.insert(pair<int, int>(0,7));
    m.insert(pair<int, int>(1,4));
    m.insert(pair<int, int>(2,5));
    m.insert(pair<int, int>(3,6));
    m.insert(pair<int, int>(4,1));
    m.insert(pair<int, int>(5,2));
    m.insert(pair<int, int>(6,3));
    m.insert(pair<int, int>(7,8));

    while(T--){
        cin >> N;
        int f = N%8;
        int a = N/8;
        int ans = m[f];
        string b;
        if(f==0){
             ans += (a-1)*8;
             b = "SL";
        }
        else{
            ans += a*8;
            b = A[m[f]];
        }



        cout << ans << b << endl;

    }
    return 0;
}
