#include<iostream>
using namespace std;

int payingUpDp(int A[], int n,int m){
    //tabulate
    int dp[2][m+1];

    //initialize
    int u=0, v=1;
    dp[u][0] = dp[v][0] = 1;

    for(int i=1;i<=m;++i) dp[u][i]=0;

    for(int i=1;i<=n;++i){
         for(int j=1;j<=m;++j)
            dp[v][j] = ((j-A[i-1]>=0)?dp[u][j-A[i-1]]:0) || dp[u][j] ;
        //swap u,v
        u = u+v;
        v = u-v;
        u = u-v;
    }


    return dp[u][m];
}



int main(){
    int t,n,m, status;
    int A[20];
    cin >> t;

    for(int i=0;i<t;++i){
        cin >> n >> m;
        for(int i=0;i<n;++i) cin >> A[i];
        status = payingUpDp(A,n,m);
        if(status) cout << "Yes"<< endl;
        else cout << "No" << endl;

        cin.ignore();
    }
    return 0;
}
