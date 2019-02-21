#include<iostream>
using namespace std;

int main(){
    // first read two integers N c
    // print operation and y; operation 1: select a number
    // 2: fix the broken num, 3:found the answer

    // read the integer: 0: not broken, 1: broken, -1: invalid
    //print 3 and answer x

    int operation = 1, x, N,c, fixing=0, status;

    cin >> N >> c;

    int l=1,r=N, y;

    while(l<r){

        operation = (fixing)?2:1;
        if(operation==1){
            y = l+(r-l)/2;
            cout << operation << " " << y << endl;
            cin >> status;

            if(status==1){
                    fixing = 1;
                    r = y;
            }else if(status==0){
                fixing = 0;
                if(y+1<=r) l = y+1;
            }
            else if(status==-1) fixi

        } else{
            cout << operation << endl;
            fixing = 0;
        }


    }

    if(N==1){
            operation = 1;
            y = 1;
        cout << operation << " "<<  y<< endl;
        cin >> status;

        if(status==1) fixing=1;
        l = y;
    }

    if(fixing) cout << 2 << endl;
    operation = 3;
    cout << operation << " " << l << endl;
    return 0;
}
