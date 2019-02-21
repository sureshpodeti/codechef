
#include<iostream>

using namespace std;


int main(){
    int T;
    cin >> T;


    string top, bottom;
    while(T--){
            cin >> top >> bottom;

            int b=0, o=0;
            for(int i =0;i<3;++i){
                if(top[i]=='b' || bottom[i]=='b') ++b;
                if(top[i]=='o' || bottom[i] == 'o') ++o;
            }

            if(b>=2 && o>=1)
                cout << "yes" << endl;
            else cout << "no" << endl;

    }

    return 0;
}
