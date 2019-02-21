#include<iostream>

using namespace std;

string balanced(int A[], int N, int P){
    int half = P/2, tenth = P/10;

    int cakewalk = 0, hard = 0;

    for(int i=0;i<N;++i)
        if(A[i]>=half) ++cakewalk;
        else if(A[i]<=tenth)++hard;


    return (cakewalk==1 && hard==2)? "yes":"no";



}
int main(){
    int T, N , P;
    cin >> T;



    while(T--){
        cin.ignore();
        cin >> N >> P;

        int A[N];
        for(int i=0;i<N;++i) cin >> A[i];

        cout << balanced(A, N, P) << endl;



    }
    return 0;
}
