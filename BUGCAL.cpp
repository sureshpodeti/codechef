#include<iostream>
#include<vector>
using namespace std;

int main(){
    int T;
    cin >> T;

    long long int a, b;

    while(T--){
        cin.ignore();
        cin >> a >> b;

        vector<int> vect;

        while(1){
                if(a<10 && b<10) {

                        if((a+b)==10 && vect.empty()){ // important case to handle
                            vect.push_back(0);break;
                        }

                        if((a+b)==0 || (a+b)==10 )
                            break;
                        vect.push_back((a+b)%10);
                        break;
                };
                int c = (a%10) + (b%10);
                if(c>=10) c %= 10;

                vect.push_back(c);

                //update a, b
                a /=10;
                b /=10;
        }

        int n = vect.size();
        for(int i=n-1;i>=0;--i) cout << vect[i];
        cout << endl;
    }
    return 0;
}



