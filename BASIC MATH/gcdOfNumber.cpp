#include <iostream>
using namespace std;

void gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    cout << (a == 0 ? b : a) << endl;
}

int main() {
    gcd(12, 15);
    return 0;
}
