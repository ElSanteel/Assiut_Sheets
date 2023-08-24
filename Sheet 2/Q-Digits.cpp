#include<bits/stdc++.h>

using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int num;
        cin >> num;
        if (num == 0) {
            cout << 0;
        } else {
            while (num > 0) { // 12
                int digit = num % 10;// 1
                cout << digit << " "; // 1
                num /= 10;
            }
        }
        cout << endl;
    }

}