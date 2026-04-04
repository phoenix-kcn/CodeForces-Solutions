// A. The 67th Integer Problem
//link: https://codeforces.com/contest/2218/problem/A
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
    
    int x;
    cin >> x;

    if(x>=0 && x<67) cout << x+1 << endl;
    else if(x==67) cout << x << endl;
    else if(x<0 && x>=-67) cout << x+1 << endl;
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