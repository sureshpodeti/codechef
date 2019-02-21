
#include<iostream>
#include<set>
using namespace std;

int main(){
    int T;
    cin >> T;

    string st1[4], st2[4];
    while(T--){
        cin.ignore();

        for(int i=0;i<4;++i)
            cin >> st1[i];

        for(int i=0;i<4;++i)
            cin >> st2[i];

        int y = 0;
        for(int i=0;i<4;++i)
            for(int j=0;j<4;++j){
                if(st1[i]==st2[j])
                    ++y;
            }
        if(y>=2)
            cout << "similar" << endl;
        else cout << "dissimilar" << endl;




    }
    return 0;
}
