#include <bits/stdc++.h>
using namespace std;

string s, t;
int cnt;

int main() {
    freopen("rosalind_subs.txt", "r", stdin);
    cin >> s >> t;
    for (int i = 0; i < s.length() - t.length() + 1; i++)
    {
        bool sat = true;
        for (int j = 0; j < t.length(); j++) sat &= (t[j] == s[i + j]);
        if (sat)
        {
            cout << i + 1 << ' ';
        }
    }
}