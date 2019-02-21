// program to add two big integers
#include<iostream>
#include<string>


using namespace std;

int main(){
    string numStr1, numStr2;
    cin >> numStr1 >> numStr2;


    //keep track of longest string and shortest string
    string& rLongStr = (numStr1.length()> numStr2.length())?numStr1:numStr2;
    string& rShortStr = (numStr1.length()<=numStr2.length())?numStr1:numStr2;

    string numStrSum = '0'+rLongStr;

    string::reverse_iterator r_itShort, r_itSum;

    r_itShort = rShortStr.rbegin();
    r_itSum = numStrSum.rbegin();

    while(r_itShort!=rShortStr.rend()){
        *r_itSum += *r_itShort - '0';
        if(*r_itSum>'9'){
            *(r_itSum+1) += 1;
            *r_itSum -= 10;
        }
        ++r_itShort;
        ++r_itSum;
    }

    if(numStrSum.at(0)=='0') numStrSum.erase(0,1);

    cout << numStrSum << endl;
    cout << rLongStr << endl;



    return 0;
}
