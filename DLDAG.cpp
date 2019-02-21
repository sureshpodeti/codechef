#include<iostream>
#include<vector>
using namespace std;

void deleteDAG(vector<int> A[], int n){
    vector<vector<int>> T;
    vector<int>::iterator it;
    vector<vector<int>>::iterator itr;


    for(int i=1;i<=n;++i){
            vector<int> B;
            for(it=A[i].begin();it!=A[i].end();++it)
                if(*it!=-1 && A[*it].back()==-1) B.push_back(i);

            T.push_back(B);
    }


    for(int i=0;i<T.size();++i){
        for(int j=0;j<T[0].size();++j)
            cout << T[i][j] << endl;
    }





}

int main(){
    int N,M,U,V;
    cin >> N >> M;

    vector<int> A[N+1];

    //initialize the array
    for(int i=1;i<=N;++i)
        A[i].push_back(-1);

    while(M--){
        cin.ignore();
        cin >> U >> V;

        if(A[U].back()==-1) {
            A[U].pop_back();
            A[U].push_back(V);
        }else A[U].push_back(V);
    }

    deleteDAG(A, N);
    return 0;
}
