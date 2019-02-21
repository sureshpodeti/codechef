#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t,a,n;
    cin >> t;

    while(t--){
        cin.ignore();
        vector<int> vect;
        int ans=-1, isN=0;

        while(cin.peek()!='\n') {
            cin >> a;
            vect.push_back(a);
        }
        n = vect.size();

        for(int i=0;i<n;++i){
            if(vect[i]==n-1 && !isN) {isN=1;continue;}
            ans = max(ans, vect[i]);
        }

        cout << ans << endl;

    }
    return 0;
}
