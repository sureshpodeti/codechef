#include<iostream>

using namespace std;


int main(){
    int T, W, H, P, N, B;
    cin >> T;

    while(T--){
            cin >> N >> B;

            //arrays to store weight, height, and Price
            long long int weight[N], height[N], price[N];

            for(int i=0;i<N;++i){
                cin >> W >> H >> P;
                weight[i] = W;
                height[i] = H;
                price[i] = P;
            }


            // array to store the status if the tab is in within the badget
            int badgetStatus[N];

            for(int i=0;i<N;++i)
                badgetStatus[i] = (price[i]<=B)?1:0;

            // maximum area
            long long int areaRect = -1;
            for(int i=0;i<N;++i){
                if(badgetStatus[i]){
                    areaRect = max(areaRect, weight[i]*height[i]);
                }
            }

            if(areaRect==-1){
                cout << "no tablet" << endl;
            }else{
                cout << areaRect << endl;

            }


    }

    return 0;
}
