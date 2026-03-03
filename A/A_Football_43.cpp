#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;

    vector<string> ss(n);
    vector<int> freq(256, 0);

    for(int i = 0; i < n; i++)
        cin >> ss[i];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < ss[i].size(); j++) {
            freq[(unsigned char)ss[i][j]]++;
        }
    }

    int max_freq = *max_element(all(freq));
    
    for(int k = 65; k < 256; k++) {
        if(freq[k] == max_freq) {
            cout << (char)k;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}