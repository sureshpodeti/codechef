#include<iostream>

using namespace std;

int main(){
    int T, N, cakewalk, simple, easy, medium, hard;
    cin >> T;

    string st;
    while(T--){
        cin.ignore();
        cin >> N;

        cakewalk=simple=easy=medium=hard=0;
        while(N--){
            cin.ignore();
            cin >> st;
            if(st=="cakewalk") ++cakewalk;
            else if(st=="simple") ++simple;
            else if(st=="easy") ++easy;
            else if(st=="easy-medium" || st=="medium") ++medium;
            else ++hard;
        }

        if(cakewalk>=1 && simple>=1 && easy>=1 && medium>=1 && hard>=1)
            cout << "Yes" << endl;
        else cout << "No" << endl;

    }
    return 0;
}
