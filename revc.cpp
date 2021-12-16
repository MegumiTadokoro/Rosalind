#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
    freopen("rosalind_revc.txt", "r", stdin);
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'T') s[i] = 'A';
        else if (s[i] == 'A') s[i] = 'T';
        else if (s[i] == 'G') s[i] = 'C';
        else if (s[i] == 'C') s[i] = 'G';
    }
    reverse(s.begin(), s.end());
    cout << s;
}