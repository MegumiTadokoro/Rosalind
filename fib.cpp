#include <bits/stdc++.h>
using namespace std;

long long dp[50], n, k;

int main() {
    freopen("rosalind_fib.txt", "r", stdin);
    cin >> n >> k;
    dp[0] = 0, dp[1] = 1;
    for (int i = 2; i <= n; i++) dp[i] = dp[i-1] + k*dp[i-2];
    cout << dp[n];
}