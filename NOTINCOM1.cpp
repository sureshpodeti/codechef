
#include<iostream>
#include<set>
using namespace std;

int main(){

    int T, N, M;
    cin >> T;

    while(T--){
        cin >> N >> M;

        int A[N], B[M];
        set<int> s;
        for(int i=0;i<N;++i){
            cin >> A[i];
            s.insert(A[i]);
        }


        for(int i=0;i<M;++i){
            cin >> B[i];
            s.insert(B[i]);
        }


        cout << (N+M-s.size()) << endl;


    }
    return 0;
}
