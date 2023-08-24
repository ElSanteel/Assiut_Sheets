#include<bits/stdc++.h>

using namespace std;

int main() {
    string num;
    cin >> num;
    char reversedNum[num.size()];
    int counter = 0;
    for (int i = num.size() - 1; i >= 0; i--) {
        reversedNum[counter] = num[i];
        counter++;
    }
    int integerNum, integerReversedNum;
    stringstream d;
    d << num;
    d >> integerNum;
    stringstream s;
    s << reversedNum;
    s >> integerReversedNum;
    cout << integerReversedNum << endl;
    if (integerNum == integerReversedNum) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}