#include<iostream>
#include<cmath>
using namespace std;

int computeAns(int n, int p){
    // declare table dp
    int dp[2][p+1], t;

    //initialize
    int u=0, v=1;
    dp[u][0] = dp[v][0] = 0;

    for(int i=1;i<=p;++i) dp[u][i] = -1;

    for(int i=0;i<n;++i){
        for(int j=1;j<=p;++j){
            t = j-int(pow(2,i));
            if(dp[u][j]==-1){
                if(t>=0&&dp[v][t]!=-1) dp[v][j] = 1+dp[v][t];
                else dp[v][j] = -1;
            }else{
                if(t>=0&&dp[v][t]!=-1) dp[v][j] = min(dp[u][j], 1+dp[v][t]);
                else dp[v][j] = dp[u][j];

            }

        }
        //swap u,v
        u = u+v;
        v = u-v;
        u = u-v;
    }


    return dp[u][p];
}
int main(){
    int t,p,id;
    cin >> t;

    while(t--){
        cin.ignore();
        cin >> p;
        id = floor(log2(p));
        if(id>=12) id=11; // to handle p's greater then the given menu values
        cout << computeAns(id+1, p) << endl;

    }
    return 0;
}
