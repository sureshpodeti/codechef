#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int T, N;
    cin >> T;

    map<long long int, long long int> m;
    map<long long int, long long int>::iterator itr;

    while(T--){
        cin.ignore();
        cin >> N;

        long long int A[N];
        for(int i=0;i<N;++i) cin >> A[i];

        sort(A, A+N);

        int duplicate = 0;
        // check if any duplicates are present
        for(int i=0;i<N;++i)
            if(m.find(A[i])!=m.end()) {
                    m[A[i]] ++; duplicate=1;break;}
            else m[A[i]] = 1;

        if(duplicate || A[0] == 0) cout << 0 << endl;
        else cout << A[0] << endl;


    }

    return 0;
}
