#include <bits/stdc++.h>
using namespace std;

double w[26] = {71.03711, 0.0, 103.00919, 115.02694, 129.04259, 147.06841, 
                57.02146, 137.05891, 113.08406, 0.0, 128.09496, 113.08406, 
                131.04049, 114.04293, 0.0, 97.05276, 128.05858, 156.10111, 
                87.03203, 101.04768, 0.0, 99.06841, 186.07931, 0.0, 163.06333, 0.0};
double ans = 0;

string s;

int main() {
    freopen("rosalind_prtm.txt", "r", stdin);
    cin >> s;
    for (char c : s) ans += w[c - 'A'];
    cout << ans;
    printf("%.6f", ans);
}