#include<iostream>

using namespace std;

int main(){
    int t, A,B,N, rounds;
    int a, b, ans;

    cin >> t;
    while(t--){
            cin.ignore();
            cin >> A >> B >> N;

            if(N%2!=0)
                A = A*2;

            if(A>B) ans = A/B;
            else ans = B/A;

            cout << ans << endl;

    }

    return 0;
}
