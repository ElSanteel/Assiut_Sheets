#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long fib_one = 0, fib_two = 1;
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << fib_one << " ";
        } else if (i == 2) {
            cout << fib_two << " ";
        } else {
            long long fib = fib_one+fib_two;
            cout << fib << " ";
            fib_one=fib_two;
            fib_two=fib;
        }
    }

}