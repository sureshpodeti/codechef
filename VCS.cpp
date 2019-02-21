#include<iostream>

using namespace std;

int main(){
    int T, N, M, K, m, k;

    cin >> T;

    while(T--){
        cin.ignore();
        cin >> N >> M >> K;

        int ignored[N+1], tracked[N+1];

        int unignored[N+1], untracked[N+1];

        //initialization step
        for(int i=1;i<=N;++i){
            ignored[i] = tracked[i] = 0;
            unignored[i] = untracked[i] = 1;
        }

        while(M--) {cin >> m; ignored[m] = 1; unignored[m]=0;}
        while(K--) {cin >> k; tracked[k]= 1; untracked[k]=0;}


        int c1=0, c2=0;
        for(int i=1;i<=N;++i){
            if(ignored[i] == 1 && tracked[i]==1) ++c1;
            if(unignored[i]==1 && untracked[i]==1) ++c2;
        }

        cout << c1 << " " << c2 << endl;
    }


    return 0;
}
