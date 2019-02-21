
#include<iostream>

using namespace std;

int main(){
    int T, N, B;
    long long int M;
    cin >> T;

    while(T--){
        cin >> N >> B >> M;

        long long int result = 0;
        int n;

        while(N>0){
            if(N%2==0){
            n = N/2;
            result += n*M;
        }else{
            n = (N+1)/2;
            result += n*M;
        }

        //add rest time
        result += B;

        //update N, and M
        N -= n;
        M *= 2;

        }

        cout  << (result-B) << endl;


    }

    return 0;
}
