#include <iostream>

using namespace std;

// 问题描述：生成N个1到500之间的随机数
// 删去其中相同的数仅保留一个
// 按照从小到大进行排序

// 输入样例：
// 3
// 2
// 2
// 1

// 输出样例：
// 1
// 2

int main() {
    int a[1001];
    //注意初始化
    for (int i = 0; i < 1001; i++) {
        a[i] = 0;
    }
    int N = 0, max = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int tmp = 0;
        cin >> tmp;
        a[tmp]++;
        if (tmp > max) {
            max = tmp;
        }
    }
    for (int i = 1; i <= max; i++) {
        if (a[i] > 0) {
            cout << i << endl;
        } else {
            continue;
        }
    }
    return 0;
}
