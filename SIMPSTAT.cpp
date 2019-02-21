#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main() {
    int T, N, K, a;
    cin >> T;

    while(T--){
        cin >> N >> K;

        int A[N];
        for(int i=0;i<N;++i)
            cin >> A[i];


        int s = 0;

        // sort the array
        sort(A, A+N);


        for(int i=K;i<N-K;++i)
            s += A[i];

        cout << fixed << setprecision(6) << (s/double(N-2*K)) << endl;



    }

    return 0;
}
