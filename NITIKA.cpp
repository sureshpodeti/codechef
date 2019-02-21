#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main(){
    int T;
    cin >> T;

    string line;
    cin.ignore();
    while(T--){
        getline(cin, line);

        stringstream ss(line);

        string  st;
        vector<string> v;
        while(ss >> st)
                v.push_back(st);

        string ans;
        int N = v.size();

        transform(v[N-1].begin(), v[N-1].end(), v[N-1].begin(), ::tolower);
        v[N-1][0] = toupper(v[N-1][0]);

        //using switch statement
        switch(N){
            case 1:
                cout << v[0] << endl;
                break;

            case 2:
                v[0][0] = toupper(v[0][0]);
                cout << v[0][0] <<  ". " << v[1] << endl;
                break;


            case 3:
                v[0][0] = toupper(v[0][0]);
                v[1][0] = toupper(v[1][0]);
                cout << v[0][0] << ". " << v[1][0] << ". " << v[2] << endl;
                break;

        }








    }

    return 0;
}
