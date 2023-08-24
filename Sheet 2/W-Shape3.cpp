#include<bits/stdc++.h>
using namespace std;
int main(){
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
    spaces=-1;
    for (int i = rows; i >= 1; --i) {

        for (int j = 0; j <= spaces; j++) {
            cout << " ";
        }
        for (int k = 1; k < i * 2; k++) {
            cout << "*";
        }
        spaces++;
        cout << endl;
    }

}