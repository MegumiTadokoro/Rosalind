#include <bits/stdc++.h>
using namespace std;

string id, dna1, dna2;
vector<pair<string, string> > grp;

int main() {
    freopen("rosalind_grph.txt", "r", stdin);
    while(getline(cin, id) && getline(cin, dna1) && getline(cin, dna2)) grp.push_back({id, dna1+dna2});
    for (int i = 0; i < grp.size(); i++) grp[i].first.erase(0, 1);
    for (pair<string, string> u : grp)
    {
        for (pair<string, string> v : grp)
        {
            if (u == v) continue;
            if(u.second[0] == v.second[v.second.length() - 3] &&
               u.second[1] == v.second[v.second.length() - 2] &&
               u.second[2] == v.second[v.second.length() - 1])
            {
                cout << v.first << ' ' << u.first << '\n';
            }
        }
    }
}