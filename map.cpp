#include<iostream>
#include<map>
#include<set>
using namespace std;

void display(map<int,int> &m){

    for(auto it=m.begin();it!=m.end();++it)
        cout << it->first << "-" << it->second << endl;
}
int main(){
//    map<char, int> m;
//    m['a'] = 10;
//    m['b'] = 20;
//    m['c'] = 30;
//
//    map<char, int> A;
//
//
//    A.insert(m.begin(), m.end());
//    for(auto it=A.begin();it!=A.end();++it)
//        cout << it->first << "-" << it->second << endl;


//    map<int, int> A;
//    for(int i=1;i<=10;++i)
//        A.insert(pair<int, int>(i, i*10));
//
//     O(1) erase
//    auto it = A.erase(A.begin());
//    cout << it->first << "-"<< it->second << endl;
//
//     log(n) erase
//    auto n = A.erase(5);
//    cout << n << endl;
//
//     iterator erase, for n erases O(n)
//    auto ir = A.erase(A.begin(), A.end());
//    cout << ir->first << "-" << ir->second << endl;
//
//
//    cout << A.size() << endl;
//    for(auto it=A.begin();it!=A.end();++it)
//        cout << it->first << "-" << it->second << endl;

//    map<int,int> m;
//    for(int i=1;i<=10;++i)
//        m.insert(pair<int,int>(i,i*10));
//
//    map<int,int>::iterator it;
//    it = m.begin();
//
//    cout << it->first << "-" << it->second << endl;
//    ++it;
//    cout << it->first << "-" << it->second << endl;

//    set<int> s;
//    s.insert(10);
//    s.insert(20);
//    s.insert(30);
//
//    s.erase(s.begin(), s.find(30));
//
//    for(auto it = s.begin(); it!=s.end(); ++it)
//        cout << *it << " ";
//    cout << endl;

//    map<int, int> A, B;
//    A[1] = 10;
//    A[2] = 20;
//
//    B[10] = 100;
//    B[20] = 200;
//
//    // Swap two maps , time complexity: O(1)
//    A.swap(B);
//    display(A);
//    display(B);


    map<int, int> A;
    A[1] = 10;
    A[2] = 20;

    if(A.find(1)!=A.end())
        cout << "found" << endl;
    else cout << "not found" << endl;









    return 0;
}
