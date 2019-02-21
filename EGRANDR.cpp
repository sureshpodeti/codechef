#include<iostream>

using namespace std;

int main(){
    int T, N;
    cin >> T;

    while(T--){
        cin.ignore();
        cin >> N;

        int A[N];
        for(int i=0;i<N;++i) cin >> A[i];

        int fail=0, fullscore=0;
        double avg = 0.0;

        for(int i=0;i<N;++i){
            avg += A[i];
            if(A[i]==2) ++fail;
            if(A[i]==5) ++fullscore;
        }

        avg /= N;
        if(fail==0 &&fullscore>0&& avg>=4)
            cout << "Yes" << endl;
        else cout << "No" << endl;



    }

    return 0;
}
