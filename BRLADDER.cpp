#include<iostream>

using namespace std;


int main(){
    int Q;
    long long int a, b;
    cin >> Q;

    while(Q--){
        cin.ignore();
        cin >> a >> b;

        // sorting; swapping
        if(a>b){
            //swapping is needed
            // to ensure a<b
            a = a+b;
            b = a-b;
            a = a-b;
        }

        int status = 0;
        if(a%2==0){
            if(b==a+2) status = 1;
            else status = 0;
        }else{
            if(b==a+1 || b==a+2) status = 1;
            else status = 0;

        }

        if(status) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}
