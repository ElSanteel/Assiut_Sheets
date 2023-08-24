#include<bits/stdc++.h>
using namespace std;
int main(){
  char x;
  cin>>x;
  if(int(x)>=97&&int(x)<=122){
      cout<<"ALPHA\nIS SMALL";
  }
  else if(int(x)>=65&&int(x)<=90){
      cout<<"ALPHA\nIS CAPITAL";
  }
  else{
      cout<<"IS DIGIT";
  }
}