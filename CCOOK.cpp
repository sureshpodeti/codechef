#include<iostream>
#include<map>
using namespace std;

int main(){
    int N, solved;
    cin >> N;

    map<int, string> m;
    m.insert(pair<int, string>(0, "Beginner"));
    m.insert(pair<int, string>(1,"Junior Developer"));
    m.insert(pair<int, string>(2, "Middle Developer"));
    m.insert(pair<int, string>(3, "Senior Developer"));
    m.insert(pair<int, string>(4, "Hacker"));
    m.insert(pair<int, string>(5, "Jeff Dean"));

    int rows=N, cols=5;
    int A[cols];

    cin.ignore();
    for(int i=0;i<rows;++i){
        for(int j=0;j<cols;++j) cin >> A[j];
        solved = 0;
        for(int z=0;z<cols;++z)
            if(A[z]==1) ++solved;

        cout << m[solved] << endl;

    }


    return 0;
}
