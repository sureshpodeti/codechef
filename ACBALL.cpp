#include<iostream>

using namespace std;

int main(){
    int T, N;
    cin >> T;

    string X,Y,Z;
    while(T--){
        cin.ignore();
        cin >> X >> Y;

        N = X.length();
        Z = "";

        for(int i=0;i<N;++i)
             if(X[i]==Y[i])
                Z += (X[i]=='W')?'B':'W';
             else Z += 'B';

        cout << Z << endl;

    }
    return 0;
}
