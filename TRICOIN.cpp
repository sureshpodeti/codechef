#include<iostream>

using namespace std;
long compute(long n){
    long left = 1, right = n, mid;
    long value, t;
    while(left<right){
        mid = left + (right-left)/2;
        value = mid*(mid+1)/2;
        if(value == n) return mid;
        else if(value>n) right = mid-1;
        else if(value<n){
            t = (mid+1)*(mid+2)/2;
            if(mid+1<=right && t==n) return mid+1;
            if(mid+1<=right &&  t>n) return mid;
            else if(mid+1<=right && t<n) left = mid+1;
        }
    }
    return left;

}
int main(){
    int t;
    long n;
    cin >> t;
    while(t--){
        cin.ignore();
        cin >> n;
        cout << compute(n) << endl;
    }
    return 0;
}
