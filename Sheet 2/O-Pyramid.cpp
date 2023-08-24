#include<bits/stdc++.h>
using namespace std;
int main(){
int rows;
cin>>rows;
    for (int i = 1; i <= rows; ++i) { // 2
        int stars=i;// stars=2
        for(int j=1;j<=stars;j++) {// stars=2
            cout << "*";
        }
        cout<<endl;
    }

}