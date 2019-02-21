#include<iostream>
#include<map>
using namespace std;
void compute(int s, int e, int l, int r){

    int a;
    if(s==e) a = 1;
    else if(s<e) a = e-s+1;
    else if(s>e) a = 7-s+e+1;

    int c=0,d;
    while(a<=r && c<2){
        if(a>=l && a <=r) {++c; d=a;a += 7;}
        else a += 7;
    }

    if(c==1) cout << d << endl;
    else if(c==2) cout << "many" << endl;
    else cout << "impossible" << endl;

}
int main(){
    int t,l,r;
    string s, e;
    cin >> t;

    map<string, int> m;
    m.insert(pair<string,int>("monday",1));
    m.insert(pair<string,int>("tuesday",2));
    m.insert(pair<string,int>("wednesday",3));
    m.insert(pair<string,int>("thursday",4));
    m.insert(pair<string,int>("friday",5));
    m.insert(pair<string,int>("saturday",6));
    m.insert(pair<string,int>("sunday",7));


    while(t--){
        cin.ignore();
        cin >> s >> e >> l >> r;
        compute(m[s], m[e], l,r);
    }
    return 0;
}
