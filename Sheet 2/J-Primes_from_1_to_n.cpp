#include<bits/stdc++.h>

using namespace std;

int main() {
    int numOfValues;
    cin >> numOfValues;
    for (int i = 2; i <= numOfValues; i++) {
        bool isPrime = true;
        for (int j = 2; j<=i/2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }
}