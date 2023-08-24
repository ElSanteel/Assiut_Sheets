#include<bits/stdc++.h>

using namespace std;

int main() {
    short lines;
    cin >> lines;
    int number = 1;
    for (int i = 1; i <= lines; ++i) {
        cout << number++ << " " << number++ << " " << number++;
        if(number%4==0) {
            number++;
            cout<<" PUM"<<endl;
            continue;
        }

    }
}