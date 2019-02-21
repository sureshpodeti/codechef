#include<iostream>
#include<set>
using namespace std;

set<char> compute(set<char> V, string s){
    set<char> ans;

    for(auto it=V.begin();it!=V.end();++it){
        for(int j=0;j<s.length();++j){
            if(*it==s[j])
                ans.insert(*it);
        }
    }

    return ans;

}
int main(){
    int T, N;
    cin >> T;

    string st;
    while(T--){
        cin.ignore();
        cin >> N;

        set<char> V;
        cin >> st;

        for(int i=0;i<st.length();++i) V.insert(st[i]);
        for(int i=0;i<N-1;++i){
            cin >> st;
            V = compute(V, st);
        }

        cout << V.size() << endl;
    }

    return 0;
}
