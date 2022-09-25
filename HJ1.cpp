#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int res = 0, n = s.length();
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == ' ') {
            break;
        }
        res++;
    }
    if (res == 0) {
        res = n;
    }
    cout << res << endl;
    return 0;
}
