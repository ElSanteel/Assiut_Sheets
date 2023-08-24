#include<bits/stdc++.h>

using namespace std;

int main() {
int length,max=0;
cin>>length;
    for (int i = 0; i < length; ++i) {
        int num;
        cin>>num;
        if(num>max){
            max=num;
        }
    }
    cout<<max;
}
