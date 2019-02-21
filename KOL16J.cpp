#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){
    int  T, N, a;
    cin >> T;

    while(T--){
            cin >> N;

            vector<int> V;

            int duplicates=0, ordering=1;

            set<int> S;
            for(int i=0;i<N;++i){
                cin >> a;
                V.push_back(a);
            }


            S.insert(V.begin(), V.end());

            //check for ordering
            for(int i=0;i<N-1;++i)
                if(V[i]>V[i+1]){
                    ordering  = 0;
                    break;
                }


            // check for duplicates
            if(S.size()!=N) duplicates = 1;

            // way to find missing elements
            int missing = 0;
            for(int i=1;i<=N;++i)
                if(S.find(i)==S.end()){
                    missing = 1;
                    break;
            }



            if(duplicates || ordering || missing)
                cout << "no" << endl;
            else cout << "yes" << endl;

    }
    return 0;
}
