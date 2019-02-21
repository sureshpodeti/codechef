#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int T,liftDist,v1,v2;
    cin >> T;

    while(T--){
        cin.ignore();
        cin >> liftDist >> v1 >> v2;

        double stairDist = sqrt(2)*liftDist;
        liftDist *= 2;
        if(double(stairDist/v1)<double(liftDist/v2))
            cout << "Stairs" << endl;
        else cout << "Elevator" << endl;
    }
    return 0;
}




