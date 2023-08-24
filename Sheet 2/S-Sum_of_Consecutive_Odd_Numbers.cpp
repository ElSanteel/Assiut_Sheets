#include<bits/stdc++.h>

using namespace std;

int main() {
    short test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int start, end,oddSum = 0,min,max;

        cin >> start >> end; // 10 4
        if(start>end){
            max=start;
            min=end;
        }
        else{
            max=end;
            min=start;
        }
        for (int i = min; i < max; ++i) {
            if(i==min){
                continue;
            }
            else {
                if (i % 2 != 0) {
                    oddSum += i;
                }
            }
        }
        cout << oddSum << endl; // 0
    }

}