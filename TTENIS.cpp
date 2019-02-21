#include<iostream>

using namespace std;

int main(){
    int T,N;
    cin >> T;

    string results;
    while(T--){
        cin.ignore();
        cin >> results;

        N = results.length();

        int chefScore=0, oppScore=0;
        int winStatus = 0, first10Score=0;

        for(int i=0;i<N;++i){
            if(chefScore==10) first10Score = 1;
            if(oppScore==10 && !first10Score) first10Score=0;

            if(oppScore==11){
                winStatus = 0;break;
            }

            if(chefScore==11){
                winStatus = 1; break;
            }
            if(results[i]=='0') ++oppScore;
            else ++chefScore;
        }

        if(chefScore==11) winStatus=1;
        else if(oppScore==11) winStatus=0;



        if(oppScore+chefScore==N && oppScore==10 && oppScore==chefScore)
            // first one who scored 10 wins
            winStatus = (first10Score==0)?0:1;

        cout << ((winStatus==1)?"WIN":"LOSE") << endl;

    }
    return 0;
}
