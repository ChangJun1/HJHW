#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double n;
    cin >> n;
    int x = floor(n);
    if ((n - x - 0.5) >= 0) {
        cout << ceil(n) << endl;
    } else {
        cout << x << endl;
    }
    return 0;
}