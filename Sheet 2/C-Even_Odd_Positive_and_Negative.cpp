#include<bits/stdc++.h>

using namespace std;

int main() {
    int numberOfValues, num,evenCounter = 0, oddCounter = 0, positiveCounter = 0, negativeCounter = 0;
    cin >> numberOfValues;
    for (int i = 1; i <= numberOfValues; ++i) {
        cin >> num;
        if (num % 2 == 0) {
            ++evenCounter;
            if (num > 0) {
                positiveCounter++;
            } else if (num < 0) {
                ++negativeCounter;
            } else {
                continue;
            }
        } else {
            ++oddCounter;
            if (num > 0) {
                ++positiveCounter;
            } else if (num < 0) {
                ++negativeCounter;
            } else {
                continue;
            }
        }
    }
    cout << "Even: " << evenCounter << endl;
    cout << "Odd: " << oddCounter << endl;
    cout << "Positive: " << positiveCounter << endl;
    cout << "Negative: " << negativeCounter;

}
