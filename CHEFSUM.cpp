#include<iostream>
#include<limits.h>
using namespace std;


int main(){
    int T, N;
    cin >> T;

    while(T--){
        cin >> N;

        int A[N];
        for(int i=0;i<N;++i)
            cin >> A[i];

        int index, value=INT_MAX;

        for(int i=0;i<N;++i){
            if(A[i]<value)  {
                value = A[i];
                index = i+1;
            }
        }


        cout << index << endl;

    }
    return 0;
}
