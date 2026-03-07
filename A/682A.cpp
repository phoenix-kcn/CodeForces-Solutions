// A. Alyona and Numbers
//link: https://codeforces.com/contest/682/problem/A
//username: iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
using vll = vector<ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'

void solve() {
    
    ll n, m, ans;
    cin >> n >> m;

    ans = 0;
    for(int i=1; i<=n; i++){
        ll temp = i%5;
        temp = (m+temp) / 5;
        ans += temp;
    }
    cout << ans << endl;
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}