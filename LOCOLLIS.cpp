#include<iostream>

using namespace std;
int main(){
    int T, N, M, ans;
    cin >> T;

    while(T--){
        cin.ignore();
        cin >>  N >> M;

        char a;
        int B[M] = {0};
        ans = 0;
        for(int i=0;i<N;++i){
            for(int j=0;j<M;++j){
                cin >> a ;
                if(a=='1')
                    B[j]++;
            }
        }
        for(int i=0;i<M;++i)
            ans += B[i]*(B[i]-1)/2;
        cout << ans << endl;

    }

    return 0;
}
