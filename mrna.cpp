#include <bits/stdc++.h>
using namespace std;

string s;
int cnt[26] = {4, 0, 2, 2, 2, 
               2, 4, 2, 3, 0, 
               2, 6, 1, 2, 0, 
               4, 2, 6, 6, 4, 
               0, 4, 1, 0, 2, 0};
int ans = 3;

int main() {
    freopen("rosalind_mrna.txt", "r", stdin);
    cin >> s;
    for (char c : s) ans = (ans * cnt[c - 'A']) % 1000000;
    cout << ans;
}