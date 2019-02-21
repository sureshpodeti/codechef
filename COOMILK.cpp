
#include<iostream>

using namespace std;

int main(){
    int T, N;
    cin >> T;

    while(T--){
        cin.ignore();
        cin >> N;

        string A[N];
        for(int i=0;i<N;++i) cin >> A[i];

        int status = 0;
        for(int i=0;i<N;++i){
            if(A[i] == "cookie")
                if(i+1>=N || A[i+1]=="cookie") status = 1;

        }




        if(status) cout << "NO" << endl;
        else cout << "YES" << endl;

    }

    return 0;
}
