#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;

    long long int N, A,B,K;
    while(T--){
        cin >> N >> A >> B >> K;

        if(A>B){
            //swap A,B
            A = A+B;
            B = A-B;
            A = A-B;
        }

        long long int v = (N/A)- ((B%A==0)?(N/B):0);
        cout << ((v>=K)?"Win":"Lose") << endl;

    }
    return 0;
}
