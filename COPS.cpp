#include<iostream>
using namespace std;

int cops(int A[], int m, int x, int y){
    int H[101], a,b,j;

    //initialize the H
    for(int i=0;i<=100;++i) H[i] = 0;

    for(int i=0;i<m;++i){
        a  = (A[i]-x*y>0)?A[i]-x*y:0;
        b = (A[i]+x*y<=100)?A[i]+x*y:100;
        j = a;
        while(j<=b){
            H[j] = 1;
            ++j;
        }
    }

    // count no.of zeros
    int ans=0;
    for(int i=1;i<=100;++i)
        if(H[i]==0) ++ans;

    return ans;
}
int main(){
    int t, m, x, y;
    cin >> t;

    while(t--){
        cin.ignore();
        cin >> m >> x >> y;

        int A[m];
        for(int i=0;i<m;++i) cin >> A[i];

        cout << cops(A, m, x,y) << endl;
    }
    return 0;
}
