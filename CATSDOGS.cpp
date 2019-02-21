#include<iostream>


using namespace std;

int main(){
    int T, C,D,L;

    cin >> T;

    unsigned long long lowest, highest;


    while(T--){
        cin.ignore();
        cin >> C >> D >> L;

        int t = C - D*2;
        lowest = D*4 + ((t >0)? t*4: 0);
        highest = (C+D)*4;

        if(L%4==0 && L>=lowest && L<=highest) cout << "yes" << endl;
        else cout << "no" << endl;

    }

    return 0;
}
