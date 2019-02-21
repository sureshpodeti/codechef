#include<iostream>
#include<map>

using namespace std;

string compute(map<char,int> &m){
        int n = m.size();
        int A[n],i=0, L[n], R[n];

        map<char, int>::iterator itr;
        for(itr=m.begin();itr!=m.end();++itr)
            A[i++] = itr->second;

        // initialize the arrays
        L[0] = R[n-1] = 0;
        for(int i=1,j=n-2;i<n, j>=0;++i,--j){
            L[i] = A[i-1] + L[i-1];
            R[j] = A[j+1] + R[j+1];
        }

        bool found = false;

        for(int i=0;i<n;++i)
            if(A[i] == L[i]+R[i]) found = true;

        return (found)?"YES":"NO";
}
int main(){
    int t,n;
    string st;
    cin >> t;

    while(t--){
        cin.ignore();
        cin >> st;
        n = st.length();

        map<char, int> m;
        for(int i=0;i<n;++i)
            if(m.find(st[i])==m.end()) m.insert(pair<char, int>(st[i],1));
            else m[st[i]] += 1;
        cout << compute(m) << endl;

    }

}
