#include<iostream>

using namespace std;


int  main(){

    int T;
    cin >> T;

    string st;
    while(T--){
        cin >> st;

        int N = st.length();

        int c = (st[0]!=st[N-1])?1:0;
        for(int i=0;i<N-1;++i)
            if(st[i]!=st[i+1]) ++c;


        cout << ((c<=2)?"uniform": "non-uniform") << endl;

    }
    return 0;
}
