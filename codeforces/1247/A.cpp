#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if(a == b) {
        cout << a << "1 " << b << "2\n";
    } else if(a + 1 == b) {
        cout << a << "9 " << b << "0\n";
    } else if (a == 9 && b == 1) {
        cout << a << "9 " << b << "00\n";
    } else {
        cout << -1 << '\n';
    }

    return 0;
}
