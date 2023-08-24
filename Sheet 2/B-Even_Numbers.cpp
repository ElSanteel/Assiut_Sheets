#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    bool iseven = true;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        if(n==1){
            iseven=false;
        }
    }
    if(!iseven){
        cout<<-1;
    }
}
