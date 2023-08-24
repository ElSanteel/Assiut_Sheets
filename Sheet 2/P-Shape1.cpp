#include<bits/stdc++.h>

using namespace std;

int main() {
    short rows;
    cin >> rows;
    for (int i = rows; i >= 1; --i) {
        int stars = i; //stars=3
        for (int j = stars; j >= 1; j--) {
            cout << "*";
        }
        cout << endl;
    }

}