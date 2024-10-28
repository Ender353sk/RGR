/*
    Done by:
    Student: Yakymenko Artur
    Group: 123
    Lab 2.2
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string L;
    cin >> L;
    int x = L.length();
    bool e = false;

    if (L[0] == '_') {
        if (L[1] == '+' || L[1] == '-') {
            for (int i = 2; i < x; i++) {
                if (L[i] >= 'A' && L[i] <= 'K') {
                    e = true;
                }
                else if (L[i] >= '0' && L[i] <= '5') {
                    e = true;
                }
                else {
                    e = false;
                    break;
                }
            }
        }
        else {
            e = false;
        }
    }
    else {
        e = false;
    }

    if (e == true) {
        cout << L << " is L(V)";
    }
    else {
        cout << L << " isn't L(V)";
    }
}
