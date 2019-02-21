
#include<iostream>
#include<map>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;

    long long int A[N];
    for(int i=0;i<N;++i) cin >> A[i];

    long long int B[M];
    for(int i=0;i<M;++i) cin >> B[i];

    map<long long int, int> mA, mB;
    for(int i=0;i<N;++i){
        if(mA.find(A[i])==mA.end()) mA.insert(pair<long long int, int>(A[i],1));
        else mA[A[i]]++;
    }

      for(int i=0;i<M;++i){
        if(mB.find(B[i])==mB.end()) mB.insert(pair<long long int, int>(B[i],1));
        else mB[B[i]]++;
    }


    //storing indexes
    map<long long int, int> indexer1, indexer2;
    for(int i=0;i<N;++i) {
        if(mA[A[i]]==1)
            indexer1.insert(pair<long long int, int>(A[i],i));
    }

    for(int i=0;i<M;++i) {
        if(mB[B[i]]==1)
            indexer2.insert(pair<long long int, int>(B[i],i));
    }


    int target = N+M-1, counter=1;

    map<long long int, int>::iterator itr1, itr2;
    for(itr1=mA.begin();itr1!=mA.end();++itr1){
        for(itr2=mB.begin();itr2!=mB.end();++itr2){
            if(itr1->second == 1 && itr2->second==1){
                if(counter>target) break;
                cout << indexer1[itr1->first] << " " << indexer2[itr2->first] << endl;
                ++counter;

            }
        }
    }



    return 0;
}
