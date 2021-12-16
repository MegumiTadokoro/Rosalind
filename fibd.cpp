#include <bits/stdc++.h>
using namespace std;

unsigned long long acting[120], new_born[120], n, k;

int main() {
    freopen("rosalind_fibd.txt", "r", stdin);
    cin >> n >> k;
    acting[1] = 0, new_born[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        new_born[i] = acting[i-1];
        if (i >= k) acting[i] -= new_born[i-k];
        acting[i] += acting[i-1];
        acting[i] += new_born[i-1];
    }
    cout << acting[n] + new_born[n];
}