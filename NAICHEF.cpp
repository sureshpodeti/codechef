#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int T, N, A, B, X, a, b;
    cin >> T;

    while(T--){
        cin >> N >> A >> B;

        int n = N;

        a = b = 0;
        while(n--){
            cin >> X;
            if(X==A) ++a;
            if(X==B) ++b;
        }


        double prob = ((a*b)/double(N*N));
        cout << fixed<< setprecision(10) << prob << endl;

    }
    return 0;
}
