
#include<iostream>
#include<map>
using namespace std;

int main(){
    int T, N;
    cin >> T;

    string msg;

    char alphabets[26];

    alphabets[0] = 'a';
    for(int i=1;i<26;++i)
        alphabets[i] = alphabets[i-1]+1;

    map<char, int> m;
    char a = 'a';
    for(int i=0;i<26;++i)
        m.insert(pair<char, int>(a++, i));

    while(T--){
        cin.ignore();
        cin >> N >> msg;

        string msgv1 = "";

        int i=0, j=1;
        while(i<N&&j<N){
                msgv1 += msg[j];
                msgv1 += msg[i];
                i += 2;
                j += 2;
        }

        if(N%2!=0) msgv1 += msg[N-1];

        string msgFinal = "";
        for(int i=0;i<N;++i){
            msgFinal += alphabets[25 - m[msgv1[i]]];
        }




        cout << msgFinal << endl;


    }
    return 0;
}
