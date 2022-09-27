#include <iostream>
#include <cmath>

using namespace std;

/*写出一个程序，接受一个十六进制的数，输出该数值的十进制表示。
数据范围：保证结果在 1 <= n <= 2^{31}-1

输入描述：
输入一个十六进制的数值字符串。

输出描述：
输出该数值的十进制字符串。不同组的测试用例用\n隔开。

输入：
0xAA
输出：
170 */

int main() {
    string s;
    cin >> s;
    int n = s.length();
    int res = 0;
    for (int i = n - 1; i > 1; i--) {
        if (s[i] >= '0' && s[i] <= '9') {
            res = res + (s[i] - '0') * pow(16, n - 1 - i);
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            res = res + (s[i] - 'A' + 10) * pow(16, n - 1 - i);
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            res = res + (s[i] - 'a' + 10) * pow(16, n - 1 - i);
        } else {
            cout << "input error" << endl;
            break;
        }
    }
    cout << res << endl;
    return 0;
}
