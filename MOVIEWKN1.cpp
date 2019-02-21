#include<iostream>
#include<vector>

using namespace std;

int main(){

    int t,n,m, rating;
    cin >> t;

    while(t--){
        cin.ignore();
        cin >> n;
        int L[n], R[n];

        m=rating=0;

        for(int i=0;i<n;++i) cin >> L[i];
        for(int i=0;i<n;++i) cin >> R[i];

        vector<int> vect;
        for(int i=0;i<n;++i)
            if(m<= L[i]*R[i]){
                m = L[i]*R[i];
                // pop the values
                while(!vect.empty() && L[vect.back()]*R[vect.back()]<m)
                    if(vect.back()!=m) vect.pop_back();



                //push the value
                vect.push_back(i);
            }


        int sz = vect.size();
        int index;

        if(sz==1) cout << (vect[0]+1) << endl;
        else{
            // find the maximum rating
            for(int i=sz-1;i>=0;--i) if(rating<=R[vect[i]]) {index=vect[i];rating=R[vect[i]];}

            cout << (index+1) << endl;

        }


    }

    return 0;
}
