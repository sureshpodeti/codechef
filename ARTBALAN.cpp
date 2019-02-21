#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int T;
    cin >> T;

    string st;
    while(T--){
        cin >> st;

        // map to store the count of each unique character
        map<char, int> m;
        for(int i=0;i<st.length();++i)
            if(m.find(st[i])!=m.end())
                m[st[i]]++;
            else
                m.insert(pair<char,int>(st[i], 1));

        // A, a set to store the count of unique characters
        vector<long long int> A;

        // stores sum of A
        long long int S=0;

        for(auto it=m.begin();it!=m.end();++it){
            A.push_back(it->second);
            S += it->second;
        }



        // S, a sum array. s[i] = sum(A) - A[i]
        vector<long long int> B;
        for(int i=0;i<A.size();++i)
            B.push_back(S-A[i]);



        // Let N represent size of string
        long long int N = st.length();


        int maxValue;
        long long int counter;

        int u = A.size();
        long long  int ans;
        long long int f;

        // get the maximum value of unique count
        maxValue = 0;

        for(auto it=m.begin();it!=m.end();++it){
            maxValue = max(maxValue, it->second);
        }

        if(st.length()%2!=0){

                if(u==1 || u==N)
                    ans = 0;
                else{
                 // all different vs all same
                   ans = min(N-u, S-maxValue);
                }

                cout << ans << endl;


        }else{
            int flag;

            if(N%u == 0 ){
                f = N /u ;
                // if unique characters are all same, or all different, 0 is the answer
                if(u==1 || u==N)
                    ans = 0;
                else {
                    // if all need to be different or same characters
                     ans = min(N - u, S - maxValue);

                     // check if all unique elements count equal
                     flag = 1;
                     for(int i=0;i<A.size();++i)
                         if(A[i]!=f){
                            flag = 0;
                            break;
                         }
                     if(flag)
                        ans = 0;
                     else{

                         // get the elements who's count is more than f
                         // and some all such A[i] - f
                         counter  = 0;
                         for(int i=0;i<A.size();++i)
                            if(A[i]-f>0) counter += A[i]-f;

                        ans = min(ans, counter);

                     }
                      cout << ans << endl;




                }
            }


            else{

                    // with this configuration we never have already balanced string
                    // check if all unique elements count equal
                     flag = 1;
                     for(int i=0;i<A.size();++i)
                         if(A[i]!=1){
                            flag = 0;
                            break;
                         }

                     if(flag)
                        ans = 0;

                    else {

                    // all are different or same characters
                    ans = min(N-u, N-maxValue);


                    // get the k's, that represent nearest numbers that will divide N
                    int i,j, k1, k2;
                    i=j=u;
                    k1 = 0;
                    k2 = N;

                    while(i>0){
                        if(N%i==0){
                            k1 = i;
                            break;
                        }
                        --i;
                    }


                    while(j<N){
                        if(N%j==0){
                            k2= j;
                            break;
                        }

                        ++j;
                    }


                    // sort the vector
                    sort(A.begin(), A.end());

                    // k1 handling
                    if(k1>0){
                            // expected no.of characters of each unique character
                            int f1 = N/k1;
                            // get the extra elements in A that are > f1
                            long long int w1=0;

                            for(int i=0;i<A.size();++i){
                                if(A[i]-f1>0) w1 += A[i] - f1;
                            }



                            // if w1 is greater than 0
                            if(w1<0) w1 = 0;


                            if(u>k1){
                                    int x = u-k1;
                                    long long int y = 0;
                                    //get the sum of first x elements from A
                                    for(int i=0;i<x;++i)
                                        y += A[i];

                                    //update y
                                    y += w1;
                                    ans = min(ans, y);

                            }






                    }else if(k2<N){
                        // expected no.of characters of each unique character
                            int f2 = N/k2;
                            // get the extra elements in A that are > f1
                            long long int w2=0;

                            for(int i=0;i<A.size();++i){
                                if(A[i]-f2>0) w2 += A[i] - f2;
                            }

                            // if w1 is greater than 0
                            if(w2<0) w2 =0;

                            int p = u-k2;
                            long long int q = 0;
                            if(u>k2){

                                //get the sum of first x elements from A
                                for(int i=0;i<p;++i)
                                    q += A[i];

                                //update q
                                q += w2;
                            }





                                ans = min(ans, q);

                            }




                    }




                    }
                    cout << ans << endl;


        }


    }








    return 0;
}
