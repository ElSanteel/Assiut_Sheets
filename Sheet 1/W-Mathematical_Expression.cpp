#include<bits/stdc++.h>
using namespace std;
int main(){
double num1,num2,num3;
char comparison_sign,equal_sign;
cin>>num1>>comparison_sign>>num2>>equal_sign>>num3;
if(num1+num2==num3&&comparison_sign=='+'){
    cout<<"Yes";
}
else if(num1*num2==num3&&comparison_sign=='*'){
    cout<<"Yes";
}
else if(num1-num2==num3&&comparison_sign=='-'){
    cout<<"Yes";
}
else{
    if(comparison_sign=='+'){
        cout<<num1+num2;
    }
    else if(comparison_sign=='-'){
        cout<<num1-num2;
    }
    else{
        cout<<num1*num2;
    }
}


}