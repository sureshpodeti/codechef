
#include<iostream>
#include<iomanip>
#include<set>

using namespace std;

int main(){
    int t,n,x;
    cin >> t;

    while(t--){
        cin.ignore();
        cin >> n;

        multiset<int> A;
        for(int i=0;i<n;++i){
            cin >> x;
            A.insert(x);
        }

        int totPoss = n*(n-1)/2; // O(1)

        // get the count of pairs that give maximum sum
        int a, b, aCount, bCount, pairs;
        auto it = A.end();
        --it;
        b  = *it;
        bCount = A.count(b);
        --it;
        a = *it;
        aCount = A.count(a);



        if(a==b)
            pairs = aCount*(aCount-1)/2;
        else pairs = aCount*bCount;

        double ans = pairs/double(totPoss);
        cout << fixed << setprecision(9) << ans << endl;

    }
    return 0;
}
