#include<iostream>

using namespace std;
bool isPrime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}
int countPrime(int a, int b){
    int m = min(a,b);
    int counter = 0;
    for(int i=2;i<=m;++i)
        if(isPrime(i) && a%i==0 && b%i==0) ++counter;
    return counter;
}
int distPrime(int a){
    int c=0;
    for(int i=2;i<=a;++i)
        if(isPrime(i) && a%i==0) ++c;

    return c;
}
int computeUSF(int A[], int n){
    int subq[n], prime[n];
    //initialize arrays
    for(int i=0;i<n;++i){
            if(distPrime(A[i])>0) subq[i] = 1;
            else subq[i] = 0;
    }

    for(int i=0;i<n;++i)
        prime[i] = distPrime(A[i]);

    int p=0;

    for(int i=1;i<n;++i){
        for(int j=0;j<i;++j){
            if(subq[i]==0) continue;
            p = countPrime(A[i],A[j]);
            if(subq[i]<subq[j]+1){
                subq[i] = 1+subq[j];
            }
            prime[i] = p;
        }
    }


    //find the answer
    int ans=-1;
    for(int i=0;i<n;++i) ans = (subq[i]*prime[i]>ans)?subq[i]*prime[i]:ans;

    return ans;
}
int main(){

    int t,n;
    cin >> t;
    while(t--){
        cin.ignore();
        cin >> n;
        int A[n];
        for(int i=0;i<n;++i) cin >> A[i];
        cout << computeUSF(A,n) << endl;

    }
    return 0;
}
