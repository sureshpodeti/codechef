#include<iostream>

using namespace std;


int main(){
    int T, N;
    cin >> T;

    while(T--){
        cin >> N;
        int A[N], D[N];
        for(int i=0;i<N;++i)
            cin >> A[i];
        for(int i=0;i<N;++i)
            cin >> D[i];


        int status[N];
        if(A[N-1] + A[1] < D[0])
            status[0] = 1;
        else
            status[0] = 0;

        if(A[N-2] + A[0] < D[N-1])
            status[N-1] = 1;
        else
            status[N-1] = 0;

        // fill the rest
        for(int i=1;i<N-1;++i){
            if(A[i-1] + A[i+1] < D[i])
                status[i] = 1;
            else status[i] = 0;
        }


        int value = -1;
        // get the maximum value
        for(int i=0;i<N;++i){
            if(status[i])
                value = max(value, D[i]);
        }

        cout << value << endl;



    }

    return 0;
}
