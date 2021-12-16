#include <bits/stdc++.h>
using namespace std;

string s;
int a = 0, t = 0, c = 0, g = 0;

int main() {
    freopen("rosalind_dna.txt", "r", stdin);
    cin >> s;
    for (char u : s)
    {
        a += (u == 'A'), 
        t += (u == 'T'), 
        g += (u == 'G'), 
        c += (u == 'C');
    }
    cout << a << ' ' << c << ' ' << g << ' ' << t;
}