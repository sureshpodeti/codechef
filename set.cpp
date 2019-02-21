
#include<iostream>
#include<set>
#include<array>

using namespace std;

void display(set<int> &S){

    for(auto itr=S.begin();itr!=S.end();++itr)
        cout << *itr << " ";
    cout << endl;


}
int main(){
//    set<int> A;
//    array<int,5> B{1,5,3,2,4};
//
//    A.insert(B.begin(), B.end());
//
//    auto it = A.end();
//    A.insert(it, 0);
//
//    for(auto itr=A.begin(); itr!=A.end();++itr)
//        cout << *itr << " ";
//    cout << endl;

//
//    set<int> A{1,2,3};
//
//    auto it = A.begin();
//    ++it;
//
//    A.erase(it);
//
//
//    for(auto itr=A.begin(); itr!=A.end();++itr)
//        cout << *itr << " ";
//    cout << endl;

//
//    array<int, 6> A{12,75,10,32,20,25};
//    set<int> sA(A.begin(),A.end());
//
//    set<int> sB(A.begin()+3, A.begin()+6);
//
//
//    // swap operation
//    sA.swap(sB);
//    display(sA);
//    display(sB);
//
//
//    auto it = sB.find(20);
//    if(it==sB.end()){
//        cout << " not found" << endl;
//    }else cout << "found" << endl;


//    set<int> A;
//    set<int>::iterator itlow, itup;
//    for(int i=1;i<10;++i) A.insert(i*10);
//
//    itlow = A.lower_bound(29);
//    itup = A.upper_bound(60);
//
//    cout << *itlow << endl;
//    cout << *itup << endl;

    multiset<int> A;
    A.insert(10);
    A.insert(10);



    set<int> B;
    B.insert(10);
    B.insert(10);

    for(auto it=A.begin(); it!=A.end();++it)
        cout << *it << " ";
    cout << endl;

    for(auto it=B.begin(); it!=B.end();++it)
        cout << *it << " ";
    cout << endl;


    return 0;
}
