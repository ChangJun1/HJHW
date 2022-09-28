#include <iostream>
#include <string>
#include <unordered_map>

/*输入一个整数，将这个整数以字符串的形式逆序输出
程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001

输入描述：
输入一个int整数

输出描述：
将这个整数以字符串的形式逆序输出

输入：
1516000

输出：
0006151*/

using namespace std;

int main() {
    unordered_map<int, char> m{
            {0, '0'},
            {1, '1'},
            {2, '2'},
            {3, '3'},
            {4, '4'},
            {5, '5'},
            {6, '6'},
            {7, '7'},
            {8, '8'},
            {9, '9'},
    };
    int n;
    cin >> n;
    string s;
    if (n == 0) {
        s += "0";
    }
    while (n) {
        int y = n % 10;
        s += m[y];
        n /= 10;
    }
    cout << s << endl;
    return 0;
}
