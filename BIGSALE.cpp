#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int T, N, Q;
    double P, PER, loss;

    cin >> T;

    while(T--){
        cin.ignore();
        cin >> N;

        loss = 0.0;

        while(N--){
            cin.ignore();
            cin >> P >> Q >> PER;
            // check if loss occurs
            double a = P*(1+(PER/100));
            double b = a*(1- (PER/100));
            if(P>b) // loss
                loss += double((P-b)*Q);
        }

        cout << fixed << setprecision(8) << loss << endl;
    }
    return 0;
}
