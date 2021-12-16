#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
    freopen("rosalind_rna.txt", "r", stdin);
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'T') s[i] = 'U';
    }
    cout << s;
}