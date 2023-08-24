#include<bits/stdc++.h>

using namespace std;

int main() {
    short test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int num;
        cin >> num; // 7
        int onesCounter=0;
        while(num>0){
            if(num%2==1) {
                ++onesCounter;
            }
            num/=2;
        }
        int decimalFromBinary=0;
        for (int i = 1; i <= onesCounter; i++){
             decimalFromBinary+=1*pow(2,i-1);
         }
        cout<<decimalFromBinary<<endl;
    }
}