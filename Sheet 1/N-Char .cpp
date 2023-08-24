#include <bits/stdc++.h>
using namespace std;
int main(){
    char x;
    cin>>x;
    if(x>=int('A')&&x<=int('Z')){
        x+=32;
    }
    else{
        x-=32;
    }
    cout<<(x);
}