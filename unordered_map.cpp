#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, double> m{{"milk", 2.30}, {"potatoes", 1.90},
    {"eggs", 0.40}};

    cout << m.empty() << endl;
    cout << m.size() << endl;

    return 0;
}
