#include<iostream>

using namespace std;

int main(){
    int T, N, K;
    cin >> T;

    string st;
    while(T--){

        cin >> N >> K;
        cin.ignore();
        cin >> st;

        int small = 0, big=0;
        for(int i=0;i<N;++i){
                int num = st[i];
            if(num>=65 && num<=90) ++big;
            else ++small;
        }

        int chef=0, brother=0;
        if(small==N || big<=K) chef = 1;

        if(big==N || small<=K) brother = 1;

        if(chef && brother) cout << "both" << endl;
        else if(!chef && !brother) cout << "none" << endl;
        else if(chef) cout << "chef" << endl;
        else cout << "brother" << endl;
    }

    return 0;
}
