// A. Counterexample
#include <bits/stdc++.h>
using namespace std;


using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
using vll = vector<ll>;
using pii = pair<int, int>;


#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'


void solve() {
    
    ll n, m;
    cin >> n >> m;
    
    ll a=n;
    ll b=n+1;
    
    
    for(ll c= n+2; c <= m; c++){
        if (__gcd(b, c) == 1 && __gcd(a, c) > 1) {
            cout << a << " " << b << " " << c << endl;
            return;
        }
    } 
    cout << -1 << endl;
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}