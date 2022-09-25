#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    char c;
    cin >> c;
    int n = s.length(), res = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == c ) {
            res++;
        } else if ('a'<=c && c <= 'z' && c-s[i]=='a'-'A') {
            res++;
        } else if('A'<=c&&c<='Z'&& s[i]-c=='a'-'A') {
            res++;
        } else {
            continue;
        }

    }
    cout << res << endl;
    return 0;
}