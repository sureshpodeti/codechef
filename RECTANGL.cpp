#include<iostream>
#include<map>
using namespace std;


int main(){
    int T,u,v;

    cin >> T;

    int A[4];

    while(T--){
        cin.ignore();
        for(int i=0;i<4;++i) cin >> A[i];

        map<int,int> m;
        for(int i=0;i<4;++i)
            if(m.find(A[i])==m.end())
                m.insert(pair<int,int>(A[i],1));
            else ++m[A[i]];

        map<int,int>::iterator itr;

        if(m.size()>2) cout << "NO" << endl;
        else{

            int flag = 1; //forms rectangle
            for(itr=m.begin();itr!=m.end();++itr)
                if(itr->second!=2) {flag = 0;break;}


            if(!flag) cout << "NO" << endl;
            else cout << "YES" << endl;
         }


    }
    return 0;
}
