#include<iostream>
#include<vector>

using  namespace std;

int main(){
    int T, a, b, c, d,e,f, g,h,i;
    cin >> T;

    while(T--){
            vector<int> A ,B, C;
            cin.ignore();
            cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;

            A.push_back(a); A.push_back(b);A.push_back(c);

            B.push_back(d); B.push_back(e);B.push_back(f);

            C.push_back(g); C.push_back(h);C.push_back(i);


           if(A[0]>B[0] || A[1]>B[1] || A[2]>B[2]) A.swap(B);
           if(A[0]>C[0] || A[1]>C[1] || A[2]>C[2]) A.swap(C);
           if(B[0]>C[0] || B[1]>C[1] || B[2]>C[2]) B.swap(C);


           if( C[0]>=B[0] && B[0]>=A[0] && C[1]>=B[1] && B[1]>=A[1] && C[2]>=B[2] && B[2]>=A[2]){
                if((C[0]>B[0] || C[1]>B[1] || C[2]>B[2]) && (B[0]>A[0] || B[1]>A[1] || B[2]>A[2]))
                    cout << "yes" << endl;
                else cout << "no" << endl;
            }

            else cout << "no" << endl;

    }
    return 0;
}
