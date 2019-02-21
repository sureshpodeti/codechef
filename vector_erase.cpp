#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N, x, q1, q21, q22;
    cin >> N;

    vector<int> A;
    for(int i=0;i<N;++i){
        cin >> x;
        A.push_back(x);
    }

    cin >> q1;

    A.erase(A.begin()+(q1-1));

    cin >> q21 >> q22;
    A.erase(A.begin()+(q21-1), A.begin()+(q22-1));

    cout << A.size() << endl;

    for(auto itr=A.begin(); itr!=A.end();++itr)
        cout << *itr << " ";
    cout << endl;



    return 0;
}
