#include<iostream>

using namespace std;


int main(){
    int n;
    cin >> n;

    int A[n][2];

    for(int i=0;i<n;++i)
        for(int j=0;j<2;++j) cin >> A[i][j];


    int leader, lead=0;
    int u=0, v=1;
    if(A[0][u] >A[0][v]){leader=1;lead=A[0][u]-A[0][v];}
    else {leader=2; lead=A[0][v]-A[0][u];}

    for(int i=1;i<n;++i){
        A[i][u] += A[i-1][u];
        A[i][v] += A[i-1][v];
        if(A[i][u]>A[i][v])
            if(A[i][u]-A[i][v]> lead){lead=A[i][u]- A[i][v];leader=1;}
        else
            if(A[i][v]-A[i][u]>lead){lead=A[i][v]- A[i][u];leader=2;}

    }
    cout << leader << " "<<lead ;

    return 0;
}
