#include<iostream>
#include<algorithm>
using namespace std;

// algorithm time complexity:
// time complexity:  O(m*log(m)) -> sorting

int binarySearch(int B[], int M, int n){

    int l=0, r=M-1;

    int mid;

    while(l<M && r>=0){
        mid = l+(r-l)/2;
        if(B[mid]==n){
            return 1;
        }else if(B[mid]>n){
            // go left
            r = mid -1;
        }else{
            // go right
            l = mid+1;
        }

    }

    return 0;
}
int main(){

    int T, N, M;
    cin >> T;

    while(T--){
        cin >> N >> M;

        int A[N], B[M];
        for(int i=0;i<N;++i) cin >> A[i];


        for(int i=0;i<M;++i) cin >> B[i];

        // sort the array B
        sort(B, B+M);
        int counter = 0;

        for(int i=0;i<N;++i){
                // perform binary search to find the integer
                if(binarySearch(B, M, A[i])) ++counter;

        }


        cout << counter << endl;


    }
    return 0;
}
