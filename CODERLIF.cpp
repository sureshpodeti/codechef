#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        cin.ignore();
        int MonthDays = 30;
        int A[MonthDays];
        for(int i=0;i<MonthDays;++i) cin >> A[i];

        int i=0, isBored=0;
        while(i<MonthDays){
            int counter = 0;

            if(A[i]){
                    ++counter;
                    int j = i+1;
                    while(j<MonthDays && A[j]){
                        if(A[j]) ++counter;
                        ++j;
                    }

                    i=j+1;

                    if(counter>5) {isBored=1;break;}

            }else ++i;

        }
        cout << ((isBored)?"#coderlifematters":"#allcodersarefun") << endl;

    }
    return 0;
}
