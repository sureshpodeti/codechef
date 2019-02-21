#include<iostream>

using namespace std;

int main(){
    int t,hard,strength,grade;
    double carbon;
    cin >> t;

    while(t--){
        cin.ignore();
        cin >> hard >> carbon >> strength;

        if(hard>50 && carbon<0.7) grade= (strength>5600)?10:0;
        else if(carbon<0.7 && strength>5600) grade = 8;
        else if(hard>50 && strength>5600) grade = 7;
        else if(hard>50 || carbon<0.7 || strength>5600) grade = 6;
        else grade = 5;

        cout << grade << endl;
    }

    return 0;
}

