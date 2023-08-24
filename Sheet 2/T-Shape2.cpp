#include<bits/stdc++.h>

using namespace std;

int main() {
    int rows;
    cin >> rows;
    int spaces = rows - 1;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        for (int k = 1; k < i * 2; k++) {
            cout << "*";
        }
        spaces--;
        cout << endl;
    }
}

/*
    int rows, starsCounter = 1;
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        for (int j = rows - 1; j >= i; j--) {
            cout << " ";
        }
        for (int z = 1; z <= starsCounter; z++) {
            cout << "*";
        }
        cout << endl;
        starsCounter += 2;
    }
}
 */