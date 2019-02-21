#include<iostream>

using namespace std;

int main(){
    double L,B;
    cin >> L >> B;

    double area = L*B;
    double per = 2*(L+B);

    if(area>per){
       cout << "Area" << endl;
       cout << area << endl;
    }else if(area<per){
        cout << "Peri" << endl;
        cout << per << endl;
    }else{
        cout << "Eq" << endl;
        cout << area << endl;
    }

    return 0;
}
