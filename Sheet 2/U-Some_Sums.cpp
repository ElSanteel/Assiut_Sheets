#include<bits/stdc++.h>

using namespace std;

int main() {
    int num, start, end, digit, sum = 0;
    cin >> num >> start >> end;
    for (int i = 1; i <= num; ++i) {
         digit = i;
        int digitSum = 0;
        while (digit >0) {
            digitSum += digit % 10;
            digit /= 10;
        }
        if (digitSum >= start && digitSum <= end) {
            sum += i;
        }
    }
    cout << sum;

}