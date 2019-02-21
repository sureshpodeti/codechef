#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    int T,N, x;
    cin >> T;

    while(T--){
        map<int, int> m;
        cin >> N;
        for(int i=0;i<N;++i){
            cin >> x;
            if(m.find(x)!=m.end())
                m[x]++;
            else m.insert(pair<int,int>(x,1));
        }

        int  a, b, counter=0;
        vector<int> v;

        for(auto it=m.rbegin();it!=m.rend() && counter<2;++it){
            if(it->second>=4){
                    v.push_back(it->first);
                    v.push_back(it->first);
                    counter += 2;
            }
            if(it->second>=2){
                v.push_back(it->first);
                counter ++;

            }
        }

        if(counter<2)
            cout << -1 << endl;
        else cout << v[0]*v[1] << endl;





    }

    return 0;
}
