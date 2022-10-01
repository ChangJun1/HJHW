#include <iostream>
#include <string>
#include <vector>

/*句子逆序
将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”

所有单词之间用一个空格隔开，语句中除了英文字母外，不再包含其他字符

数据范围：输入的字符串长度满足 1≤n≤1000
注意本题有多组输入
输入描述：
输入一个英文语句，每个单词用空格隔开。保证输入只包含空格和字母。
输出描述：
得到逆序的句子
输入：
I am a boy
输出：
boy a am I

输入：
nowcoder
输出：
nowcoder*/

using namespace std;

vector<string> splitString(string s) {
    vector<string> res;
    int begin = 0, end = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            end = i;
            while (s[i] == ' ') {
                i++;
            }
            res.push_back(s.substr(begin, end - begin));
            begin = i;
        }
    }
    res.push_back(s.substr(begin, s.size() - begin));
    return res;
}

int main() {
    string s;
    while (getline(cin, s)) {
        vector<string> v;
        v = splitString(s);
        string out;
        while (!v.empty()) {
            out += v.back();
            if (v.size() > 1) {
                out += " ";
            }
            v.pop_back();
        }
        cout << out << endl;
    }
    return 0;
}