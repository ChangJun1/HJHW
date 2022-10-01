#include <iostream>

using namespace std;

/*求int型正整数在内存中存储时1的个数
输入：
5

输出：
2

输入：
0
输出：
0*/

int main() {
    int n;
    cin >> n;
    int res = 0;
    while (n > 0) {
        res = res + (n & 1);
        n = n >> 1;
    }
    cout << res << endl;
    return 0;
}
