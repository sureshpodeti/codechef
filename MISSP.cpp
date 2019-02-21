#include<iostream>
#include<map>
using namespace std;


int missing(int A[], int n){
    map<int, int> m;
    map<int,int>::iterator itr;

    for(int i=0;i<n;++i)
        if(m.find(A[i])==m.end()) m.insert(pair<int,int>(A[i], 1));
        else ++ m[A[i]];

    int ans;
    for(itr=m.begin();itr!=m.end();++itr)
        if(itr->second%2 != 0) {ans=itr->first;break;}
    return ans;
}
int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin.ignore();
        cin >> n;
        int A[n];
        for(int i=0;i<n;++i) cin >> A[i];
        cout << missing(A,n) << endl;
    }

    return 0;
}
