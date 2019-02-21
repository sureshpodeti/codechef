#include<iostream>
#include<map>
using namespace std;

int main(){
    int T, W;
    cin >> T;

    string day;
    map<string, int> m;
    m.insert(pair<string, int>("mon", 0));
    m.insert(pair<string, int>("tues",1));
    m.insert(pair<string, int>("wed", 2));
    m.insert(pair<string, int>("thurs", 3));
    m.insert(pair<string, int>("fri", 4));
    m.insert(pair<string, int >("sat", 5));
    m.insert(pair<string, int >("sun", 6));


    while(T--){
        cin.ignore();
        cin >> W >> day;

        int times = W/7, rem = W%7;
        int index = m[day];

        int days[7] = {0};
        for(int i=0;i<7;++i){
            days[i] = times;
        }

        while(rem>0){
            days[(rem+index-1)%7] += 1;
            --rem;
        }


        for(int i=0;i<7;++i){
                cout << days[i] << " ";
        }
        cout << endl;

    }
    return 0;
}
