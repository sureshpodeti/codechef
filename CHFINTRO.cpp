
#include<iostream>

using namespace std;

int main(){

    int N, r;
    cin >> N >> r;

    int num;
    while(N--){
        cin.ignore();
        cin >> num;

        if(num>=r) cout << "Good boi" << endl;
        else cout << "Bad boi" << endl;
    }
    return 0;
}
