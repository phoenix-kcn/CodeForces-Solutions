// B. Sum of Medians
//link: https://codeforces.com/problemset/problem/1440/B
//author: https://codeforces.com/profile/iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using vvs = vector<vs>;
using vl = vector<ll>;
using vpl = vector<pair<ll,ll>>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define allr(a) a.rbegin(), a.rend()
#define sz(x) (int)(x).size()
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl


void solve() {
    
    int n, k;
    cin >> n >> k;

    vl a;
    ll pointer = n * k;
    
    for(int i=0; i<pointer; i++){
        ll x;
        cin >> x;
        a.pb(x);
    }

    ll sum = 0;

    
    while(k--){
        pointer -= (n/2 + 1);
        sum += a[pointer];
    }
    cout << sum << endl;
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