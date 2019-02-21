#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int T, N;
    cin >> T;


    while(T--){
        cin >> N;

        long long int A[N];
        for(int i=0;i<N;++i)
            cin >> A[i];

        //sort the array
        sort(A, A+N);


        // counts no.of friends joined
        int c = 0;
        for(int i=0;i<N;++i){
                if(c>=A[i]){
                    // ith person joins the party
                    ++c;
                }
        }

        cout << c << endl;
    }
    return 0;
}
