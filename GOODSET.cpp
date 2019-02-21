#include<iostream>

using namespace std;

int main(){

    int T, N;
    cin >> T;

    while(T--){
        cin.ignore();
        cin >> N;

        for(int i=0;i<N;++i)
            cout << 500 - i << " ";
        cout << endl;
    }

    return 0;
}
