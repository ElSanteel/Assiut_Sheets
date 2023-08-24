#include<bits/stdc++.h>

using namespace std;

int main() {
    int num1, num2, min, max;
    cin >> num1 >> num2;// 12 8
    if (num1 >= num2) {
        max = num1;
        min = num2;
    } else {
        max = num2;
        min = num1;
    }
    int gcd;
    for (int i = 1; i <= max; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    cout<<gcd;
}