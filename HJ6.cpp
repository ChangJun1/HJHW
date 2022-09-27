#include <iostream>
#include <cmath>

using namespace std;

/*
 * 质因数分解
功能:输入一个正整数，按照从小到大的顺序输出它的所有质因子（重复的也要列举）（如180的质因子为2 2 3 3 5 ）
数据范围： 1≤n≤2×10^9+14
输入描述：
输入一个整数
输出描述：
按照从小到大的顺序输出它的所有质数的因子，以空格隔开。
input:
180
output:
2 2 3 3 5
*/

int main() {
    int n;
    cin >> n;
    int max = ceil(sqrt(n));
    for (int i = 2; i <= max; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 1) {
        cout << n << endl;
    }
    return 0;
}