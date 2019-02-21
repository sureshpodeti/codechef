#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // first read two integers N c
    // print operation and y; operation 1: select a number
    // 2: fix the broken num, 3:found the answer

    // read the integer: 0: not broken, 1: broken, -1: invalid
    //print 3 and answer x

    int N,cost, coins=1000, selectionOp=1, fixingOp=2,resultOp=3, status,x;

    cin >> N >> cost;

    int l=1,r=N, y;

    while(l<r){

            if((r-l)+1+cost<=coins){
                //perform linear search
                  int flag = 0;
                for(int i=l;i<=r;++i){
                    cout << selectionOp << " " << i << endl;
                    coins -= 1;
                    cin >> status;
                    if(status==1) {
                        cout << fixingOp << endl;
                        coins -= cost;
                        x = i;
                        flag = 1;
                        break;

                    }
                }

                if(flag) break;


            }else{
                // binary search

                y = l+(r-l)/2;
                cout << selectionOp << " " << y << endl;

                coins -= 1;
                cin >> status;

                if(status==0) {l = y+1;}

                else if(status==1){
                        r = y;
                        cout << fixingOp << endl;
                        coins -= cost;
                }

            }

        // must include loop break statement
    }

    if(N==1){
        cout << selectionOp << " " << l << endl;
        cin >> status;
        if(status==1) {coins-=cost;cout << fixingOp << endl;}
    }



    if(l==r) x = r;
    cout << resultOp << " " << x << endl;


    return 0;
}

