#include<bits/stdc++.h>
using namespace std;
int main(){
double num;
cin>>num;
int numInt=num;
double result=num-numInt;
if(result>0){
    cout<<"float "<<numInt<<" "<<result;
}
else{
    cout<<"int "<<numInt;
}
return 0;
}