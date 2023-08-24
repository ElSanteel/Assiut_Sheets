#include<bits/stdc++.h>

using namespace std;

int main() {
    int num1, num2;
    bool lucky = false;
    cin >> num1 >> num2;


    for (int i = num1; i <= num2; i++) { // 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
        int count = 0, digits = 0;
        int j = i; //j=4
        while (j > 0) {//j>14
            count++;//count==2;
            if (j % 10 == 4 || j % 10 == 7) {
                digits++; //digit=1;
            }
            j = j / 10;//j=14/10=1


        }
        if (count == digits) {

            cout << i << " ";
            lucky = true;
        }

    }
    if (!lucky) {
        cout << -1;
    }
}

/*
 another solution
#include <iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    bool found = false;

    for (int i = A; i <= B; ++i) {
        int num = i;
        bool isLucky = true;

        while (num > 0) {
            int digit = num % 10;
            if (digit != 4 && digit != 7) {
                isLucky = false;
                break;
            }
            num /= 10;
        }

        if (isLucky) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "-1";
    }

    cout << endl;

    return 0;
}
 */