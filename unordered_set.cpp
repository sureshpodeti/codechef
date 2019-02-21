#include<iostream>
#include<set>
#include<unordered_set>

using namespace std;

int main(){
    unordered_set<int> A{1, 20, 0, 12, 100};
    set<int> B{1, 20, 0, 12, 100};


    cout << A.size() << endl;
    cout << A.empty() << endl;

    for(auto it=A.begin(); it!=A.end(); ++it)
        cout << *it << " ";
    cout << endl;


    for(auto it=B.begin(); it!=B.end(); ++it)
        cout << *it << " ";
    cout << endl;


    return 0;
}
