#include<iostream>
#include<string>

using namespace std;

int main(){
    int N;
    cin >> N;

    string st;
    string lst[]  = {"ch", "he", "ef", "che", "hef", "chef"};
    int lstN = 6;

    int friends = 0;
    for(int i=0; i<N;++i){
        cin.ignore();
        cin >> st;

        int isFriend = 0;

        for(int i=0;i<lstN;++i){
            isFriend = 0;
            for(int j=0;j<=st.length()-lst[i].length();++j)
                if(st.substr(j,lst[i].length()) == lst[i]){isFriend = 1;break;}
        }
        if(isFriend) ++friends;

    }
    cout << friends << endl;
    return 0;
}
