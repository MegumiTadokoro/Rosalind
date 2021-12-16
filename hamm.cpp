#include <bits/stdc++.h>
using namespace std;

string s, t;
int cnt = 0;

int main() {
    freopen("rosalind_hamm.txt", "r", stdin);
    cin >> s >> t;
    for (int i = 0; i < s.length(); i++) cnt += (s[i] != t[i]);
    cout << cnt;
}