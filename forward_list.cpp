#include<iostream>
#include<forward_list>
using namespace std;

void display(forward_list<int> &U){

    for(int& x: U)
        cout << x << " ";
    cout << endl;
}
int main(){
//    forward_list<int> A{11,22,33};
//    A.insert_after(A.begin(), 23);
//
//    for(int& x:A)
//        cout << x << " ";
//    cout << endl;



//    forward_list<int> A{10,20,30,40,50};
//    auto it= A.begin();
//
//    it = A.erase_after(it);
//
//    it = A.erase_after(it, A.end());
//
//    for(int& x: A)
//        cout << x << " ";
//    cout << endl;


//    forward_list<int> first{10,20,30};
//    forward_list<int> second{100,200};
//
//    first.swap(second);
//
//    display(first);
//    display(second);

    forward_list<int> A{10,20,30,40,30,20,10};

    A.remove(100);

    for(int& x: A)
        cout << x << " ";
    cout << endl;


    return 0;
}
