#include <bits/stdc++.h>

using namespace std;


/*描述
•输入一个字符串，请按长度为8拆分每个输入字符串并进行输出；
•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。

输入描述：
连续输入字符串(每个字符串长度小于等于100)

输出描述：
依次输出所有分割后的长度为8的新字符串

输入：xvnbbhcfkjxovjwhvwdzhi
输出：
xvnbbhcf
kjxovjwh
vwdzhi00
 */



int main() {
    string s;
    while (getline(cin, s)) {
        int n = s.length();
        char a[104];
        for (int i = 0; i < 104; i++) {
            a[i] = '\0';
        }
        int i = 0, j = 0;
        int m = n % 8;
        while (n >= 8) {
            for (j = i; j < i + 8; j++) {
                a[j] = s[j];
            }
            i = j;
            n = n - 8;
        }

        if (m > 0) {
            for (int j = i; j < i + m; j++) {
                a[j] = s[j];
            }
            for (int j = i + m; j < i + 8; j++) {
                a[j] = '0';
            }
        }
        for (int i = 0; a[i] != '\0'; i++) {
            cout << a[i];
            if (i % 8 == 7) {
                cout << endl;
            }
        }
    }
    return 0;
}
