#include<iostream>
#include<vector>
using namespace std;
int maxTriangleSum(vector<vector<int>> vect){
    int p = vect.size();

   // declare dp array
   int dp[2][p];

   //initialize dp
    int u=0, v=1;
    dp[u][0] = vect[u][0];

    for(int i=2;i<=p;++i){
        dp[v][0] = dp[u][0]+vect[i-1][0];
        dp[v][i-1] = dp[u][i-2] + vect[i-1][i-1];
        for(int j=1;j<i-1;++j)
                dp[v][j] = vect[i-1][j] + max(dp[u][j], dp[u][j-1]);

        // swap u,v
        u = u+v;
        v = u-v;
        u = u-v;
    }

    //find the maximum value and return
    int ans = -1;
    for(int i=0;i<p;++i) ans = max(ans, dp[u][i]);

    return ans;
}
int main(){
    int t, rows,a;
    cin >> t;
    while(t--){
        cin.ignore();
        cin >> rows;
        vector<vector<int>> vect;

        for(int i=0;i<rows;++i){
                vector<int> vec;
             for(int j=0;j<i+1;++j) {
                    cin >> a;
                    vec.push_back(a);
                    cin.ignore();
             }
             vect.push_back(vec);

        }


        cout << maxTriangleSum(vect) << endl;
    }


    return 0;
}
