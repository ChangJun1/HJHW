#include <iostream>
#include <unordered_map>

/*输入一个int型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。
保证输入的整数最后一位不是0

数据范围： 1≤n≤10^8

输入：
9876673
输出：
37689
 */

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n / 10 == 0) {
        cout << "输入有误，最后一位不能为0" << endl;
    }
    int y = 0, res = 0;
    unordered_map<int, int> m;
    while (n) {
        y = n % 10;
        m[y]++;
        if (m[y] == 1) {
            res = res * 10 + y;
        }
        n /= 10;
    }
    cout << res << endl;
    return 0;
}
