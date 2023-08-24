#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    bool isPrime=true;
    for (int i = 2; i <= num/2; ++i) { //  7 2 3 4 5 6
        if(num%i==0){
            isPrime=false;
        }
    }
    if(!isPrime){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}