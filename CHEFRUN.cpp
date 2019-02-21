#include<iostream>


using namespace std;

int main(){
    int T, X1, X2, X3, V1, V2;

    double t1, t2;
    cin >> T;

    while(T--){
        cin.ignore();
        cin >> X1 >> X2 >> X3 >> V1 >> V2;
        t1 = (X3-X1)/double(V1);
        t2 = (X2-X3)/double(V2);

        if(t1<t2)
            cout  << "Chef" << endl;
        else if(t1>t2)
            cout << "Kefa" << endl;
        else
            cout << "Draw" << endl;


    }
    return 0;
}
