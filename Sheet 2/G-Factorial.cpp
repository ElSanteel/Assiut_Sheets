#include<bits/stdc++.h>

using namespace std;

int main() {
    long long test_case,fact=1;
    cin >> test_case;
    while (test_case--) {
        long long num;
        cin >> num;
        if (num == 0) {
            cout << 1<<endl;
        } else {
            for (int i = 1; i <= num; i++) {
                fact = fact * i;
            }
            cout << fact << endl;
            fact=1;
        }
    }
}
