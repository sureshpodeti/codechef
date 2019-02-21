#include<iostream>
#include<vector>

using namespace std;


int main(){
    int R,L;
    cin >> R;

    string report;
    while(R--){
        cin >> L;
        cin.ignore();
        cin >> report;

        vector<char>  A;

        for(int i=0;i<report.length();++i){
            if(report[i]=='.') continue;
            else A.push_back(report[i]);
        }

        if(A.size()==0)
            cout << "Valid" << endl;
        else if(A[0]=='T') cout << "Invalid" << endl;
        else if(A.size()%2!=0) cout << "Invalid" << endl;
        else{
            int flag = 0;
            for(int i=0;i<A.size()-1; i=i+2){
                  if( !(A[i] == 'H' &&  A[i+1]=='T')){
                    flag = 1;
                  }

            }

            if(flag) cout << "Invalid" << endl;
            else cout << "Valid" << endl;

        }




    }

    return 0;
}
