#include<bits/stdc++.h>

using namespace std;

int main() {
    while (true) {
        int start, end;
        cin >> start >> end;
        if (start <= 0 || end <= 0) {
            break;
        } else {
            int min,max;
            if(start>end){
                max=start;
                min=end;
            }
            else{
                max=end;
                min=start;
            }
            int sum = 0;
            for (int i = min; i <= max; i++) {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
        }
    }
    return 0;
}