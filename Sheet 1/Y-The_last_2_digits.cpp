#include <bits/stdc++.h>

using namespace std;

int main() {
    int num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;
    int newNum1 = num1 % 100;
    int newNum2 = num2 % 100;
    int newNum3 = num3 % 100;
    int newNum4 = num4 % 100;
    int last_two_digits=(newNum1*newNum2*newNum3*newNum4)%100;
    if(last_two_digits<=9){
        cout << 0<<last_two_digits;
    }
    else{
        cout<<last_two_digits;
    }

}