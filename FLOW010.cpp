#include<iostream>
#include<map>
#include<cctype>
using namespace std;

int main(){
    map<char, string> m;
    m.insert(pair<char, string>('B', "BattleShip"));
    m.insert(pair<char, string>('C', "Cruiser"));
    m.insert(pair<char, string>('D', "Destroyer"));
    m.insert(pair<char, string>('F', "Frigate"));

    int  t;
    cin >> t;

    char c;

    while(t--){
        cin.ignore();
        cin >> c;
        c = toupper(c);
        cout << m[c] << endl;
    }


}
