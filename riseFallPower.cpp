#include<iostream>
#include<cmath>
using namespace std;

long long computePow(int n, int k){
   if(k==1) return n;
    long a = computePow(n, int(k/2));
    if(k%2==0) return a*a;
    else return a*a*n;
}
long long secondAns(long long value, long long d, int k){
    return value % long(ceil(pow(10,k)));
}
long long firstAns(long long value, long long d, int k){
    return (value - (value % long(ceil(pow(10,d-k))))) / long(ceil(pow(10,d-k)));
}
int main(){

    int t, n,k;
    long long a,b;
    long long digits;
    long long value;
    cin >> t;

    for(int i=0;i<t;++i){
        cin >> n >> k;
        value = computePow(n,n);
        digits = floor(log10(value)+1);
        a = firstAns(value, digits, k);
        b = secondAns(value, digits,k);
        cout << a << " " << b << endl;
    }

    return 0;
}
