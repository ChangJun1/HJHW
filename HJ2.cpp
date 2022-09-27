#include <iostream>

using namespace std;

/*写出一个程序，接受一个由字母、数字和空格组成的字符串，和一个字符，然后输出输入字符串中该字符的出现次数。（不区分大小写字母）
数据范围： 1 \le n \le 1000 \1≤n≤1000
输入描述：
第一行输入一个由字母和数字以及空格组成的字符串，第二行输入一个字符。

输出描述：
输出输入字符串中含有该字符的个数。（不区分大小写字母）


输入：
ABCabc
A
输出：
2*/

int main() {
    string s;
    getline(cin, s);
    char c;
    cin >> c;
    int n = s.length(), res = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == c) {
            res++;
        } else if ('a' <= c && c <= 'z' && c - s[i] == 'a' - 'A') {
            res++;
        } else if ('A' <= c && c <= 'Z' && s[i] - c == 'a' - 'A') {
            res++;
        } else {
            continue;
        }
    }
    cout << res << endl;
    return 0;
}