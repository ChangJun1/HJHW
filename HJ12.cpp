#include <iostream>
#include <string>

/*字符串反转
输入：
abcd
输出：
dcba*/

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        char tmp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = tmp;
    }
    cout << s << endl;
}
