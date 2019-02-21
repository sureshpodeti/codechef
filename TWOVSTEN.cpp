#include<iostream>

using namespace std;


int main(){

    int T;
    cin >> T;

    long long int x;
    while(T--){
        cin >> x;

        int f = x%10;

        int turns = 0;

        if(f==0)
            turns = 0;
        else if(f==5)
            turns = 1;
        else
            turns = -1;

        cout << turns << endl;


    }
    return 0;
}


