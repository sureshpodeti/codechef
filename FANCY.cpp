
#include<iostream>
#include<sstream>

using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        cin.clear();
        cin.sync();

        string st;
        getline(cin, st);

        istringstream ss(st);

        int realFancy = 0;
        while(ss){
            string word;
            ss >> word;

            if(word.compare("not")==0) {realFancy = 1; break;}
        }


        if(realFancy) cout << "Real Fancy" << endl;
        else cout << "regularly fancy" << endl;

    }
    return 0;
}
