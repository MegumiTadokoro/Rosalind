#include <bits/stdc++.h>
using namespace std;

string best_id, id, s;
double best_result = -1;

int main() {
    freopen("rosalind_gc.txt", "r", stdin);
    getline(cin, id);
    while(true)
    {
        int count = 0, length = 0;
        while(getline(cin, s) && s[0] != '>')
        {
            for (char c : s) count += (c == 'G' || c == 'C');
            length += s.length();
        }
        if (best_result * length < count * 100.0)
        {
            best_result = 100.0 * count / length;
            best_id = id;
        }
        if (s[0] == '>') id = s;
        else break;
    }
    best_id.erase(0, 1);
    cout << best_id << "\n" << best_result;
}