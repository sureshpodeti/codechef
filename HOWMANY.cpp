#include<iostream>
#include<cmath>

using namespace std;


int main(){
    int  N;
    cin >> N;

    int digits = floor(log10(N))+1;
    if(digits<=3) cout << digits << endl;
    else cout << "More than 3 digits" << endl;

    return 0;
}
