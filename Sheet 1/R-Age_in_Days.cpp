#include<bits/stdc++.h>
using namespace std;
int main(){
    const int one_year=365;
    const int month=30;
int n;
cin>>n;
cout<<n/one_year<<" years\n";
int remaining_days=n%365;
cout<<remaining_days/month<<" months\n";
cout<<remaining_days%month<<" days";
}