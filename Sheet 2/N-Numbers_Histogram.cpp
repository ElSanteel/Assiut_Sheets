#include<bits/stdc++.h>

using namespace std;

int main() {
    char symbol;
    int numberLines, num;
    cin >> symbol >> numberLines;
    for (int i = 0; i < numberLines; i++) {
        cin >> num;

        for (int j = 0; j < num; j++) {
            cout << symbol;
        }
        cout << endl;
    }

}