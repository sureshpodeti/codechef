#include<iostream>
using namespace std;

int main(){
    int T, N, city, level, discount;
    cin >> T;

    while(T--){
        cin.ignore();
        cin >> N;

        int city1, discount1=0,city2, discount2=0, city3, discount3=0;


        for(int i=0;i<N;++i){
                cin >> city >> level >> discount;

                if(level==1){
                        if(discount1<discount) {
                            discount1=discount;
                            city1=city;
                        }else if(discount1==discount){
                            if(city1>city) city1 = city;

                        }

                }else if(level==2){
                    if(discount2<discount) {
                            discount2=discount;
                            city2=city;
                        }else if(discount2==discount){
                            if(city2>city) city2 = city;

                        }
                }else{
                    if(discount3<discount) {
                            discount3=discount;
                            city3=city;
                        }else if(discount3==discount){
                            if(city3>city) city3 = city;

                        }
                }


        }

       cout << discount1 << " " << city1 << endl;
       cout << discount2 << " " << city2 << endl;
       cout << discount3 << " " << city3 << endl;
    }
    return 0;
}
