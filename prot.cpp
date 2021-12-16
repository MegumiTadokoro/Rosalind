#include <bits/stdc++.h>
using namespace std;

string s;

string tab = "FFLLSSSSYYBBCCBWLLLLPPPPHHQQRRRRIIIMTTTTNNKKSSRRVVVVAAAADDEEGGGG";

int toint(char c) {
    if(c == 'U') return 0;
    if(c == 'C') return 1;
    if(c == 'A') return 2;
    if(c == 'G') return 3;
}

int main() {
    freopen("rosalind_prot.txt", "r", stdin);
    cin >> s;
    for (int i = 0; i < s.length(); i += 3)
    {
        char c = tab[toint(s[i]) * 16 + toint(s[i+1]) * 4 + toint(s[i+2])];
        if(c == 'B') break;
        cout << c;
    }
}