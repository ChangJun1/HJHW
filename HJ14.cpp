#include <iostream>
#include <vector>

/*给定 n 个字符串，请对 n 个字符串按照字典序排列。
9
cap
to
cat
card
two
too
up
boat
boot

boat
boot
cap
card
cat
to
too
two
up*/

using namespace std;

void bubbleSort(vector<string> &s);

int main() {
    int n = 0;
    cin >> n;
    vector<string> s;
    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        s.push_back(t);
    }
    bubbleSort(s);
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << endl;
    }
    return 0;
}

void bubbleSort(vector<string> &s) {
    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j < s.size(); j++) {
            if (s[i].compare(s[j]) > 0) {
                string tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }
    return;
}