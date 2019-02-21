#include<iostream>

using namespace std;


int main(){
    int T, N;
    cin >> T;

    string st;
    while(T--){

        cin >> N;
        cin.ignore();
        cin >> st;

        // table to find the occurences
        int table[N/2][N];

        // array A to store the count
        int A[N];
        //initialize the array with all 1's
        for(int i=0;i<N;++i) A[i] = 1;

        //filling table
        for(int i=0;i<N/2;++i){
            int c = 0;
            for(int j=i;j<N;++j){
                int u=i-1, v=j-1, status=1;
                if(st[i] == st[j]){
                    // check if all diagonals matches
                    while(u>=0 && v>=0){
                        if(table[u][v]==0){
                            status = 0;
                            break;
                        }
                        --u;
                        --v;
                    }

                }else status = 0;

                table[i][j] = status;
                if(status) ++c;
            }
            A[i] = max(A[i], c);
        }


        // get the length and position of maximum length
        int l = 0, p = 0;
        for(int i=0;i<N;++i){
            if(A[i]>=l){
                p = i;
                l = A[i];
            }
        }

        cout << st.substr(0,p+1) << endl;


    }
    return 0;
}
