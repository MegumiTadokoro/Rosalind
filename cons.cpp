#include <bits/stdc++.h>
using namespace std;

string id;
int cnt[1010][4], ind, len = 0;
char c;

int toint(char c) {
    if(c == 'A') return 0;
    if(c == 'C') return 1;
    if(c == 'G') return 2;
    if(c == 'T') return 3;
}

int main() {
    freopen("rosalind_cons.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    getline(cin, id);
    while(true)
    {
        ind = 0;
        while((c = getchar()) != EOF && c != '>')
        {
            if (c == '\n') continue;
            cnt[ind][toint(c)]++, ind++;
        }
        len = ind;
        if(not getline(cin, id)) break;
    }
    for (int i = 0; i < len; i++)
    {
        int cntmax = max(max(cnt[i][0], cnt[i][1]), max(cnt[i][2], cnt[i][3]));
        if (cntmax == cnt[i][0]) cout << 'A';
        else if (cntmax == cnt[i][1]) cout << 'C';
        else if (cntmax == cnt[i][2]) cout << 'G';
        else if (cntmax == cnt[i][3]) cout << 'T';
    }
    cout << "\nA: ";
    for (int i = 0; i < len; i++) cout << cnt[i][0] << ' ';
    cout << "\nC: ";
    for (int i = 0; i < len; i++) cout << cnt[i][1] << ' ';
    cout << "\nG: ";
    for (int i = 0; i < len; i++) cout << cnt[i][2] << ' ';
    cout << "\nT: ";
    for (int i = 0; i < len; i++) cout << cnt[i][3] << ' ';
}