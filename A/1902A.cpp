// A. Binary Imbalance
//link: https://codeforces.com/contest/1902/problem/A
//author: iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using vvs = vector<vs>;
using vll = vector<ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'

void solve() {
    int n, count = 0, newN; cin >> n;
    string s, newS; cin >> s;

    bool hasZero = false;
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            hasZero = true;
            break;
        }
    }

    if(hasZero) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
       solve();
    }

    return 0;
}