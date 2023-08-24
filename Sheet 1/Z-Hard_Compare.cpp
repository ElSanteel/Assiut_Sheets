#include<bits/stdc++.h>

using namespace std;

int main() {
    double baseNum1, exponentNum1, baseNum2, exponentNum2;
    cin >> baseNum1 >> exponentNum1 >> baseNum2 >> exponentNum2;
    double power_num1 = exponentNum1* log(baseNum1);
    double power_num2 = exponentNum2* log(baseNum2);
    if(power_num1>power_num2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}