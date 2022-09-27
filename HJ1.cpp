#include <iostream>

using namespace std;

/*计算字符串最后一个单词的长度，单词以空格隔开，字符串长度小于5000。（注：字符串末尾不以空格为结尾）
输入描述：
输入一行，代表要计算的字符串，非空，长度小于5000。

输出描述：
输出一个整数，表示输入字符串最后一个单词的长度。


输入：
hello nowcoder

输出：
8

说明：
最后一个单词为nowcoder，长度为8*/

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
