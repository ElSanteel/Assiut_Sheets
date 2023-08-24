#include <bits/stdc++.h>

using namespace std;

int main() {
    int startInterval1, endInterval1, startInterval2, endInterval2, start, end;
    cin >> startInterval1 >> endInterval1 >> startInterval2 >> endInterval2;
    if ((startInterval2 < startInterval1 && endInterval2 < startInterval1) ||(startInterval2 > endInterval1 && endInterval2 > endInterval1)) {
        cout << -1;
    } else {
        if (startInterval1 > startInterval2) {
            start = startInterval1;
        } else {
            start = startInterval2;
        }
        if(endInterval1>endInterval2){
            end=endInterval2;
        }
        else{
            end=endInterval1;
        }
        cout<<start<<" "<<end;
    }
}