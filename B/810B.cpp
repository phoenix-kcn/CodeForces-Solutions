// B. Summer sell-off
//link: https://codeforces.com/contest/810/problem/B
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
    
    ll n, f;
    cin >> n >> f;
    
    ll total_base_sales = 0;
    vl extra_sales;

    for(int i=0; i<n; i++){
        ll k, l;
        cin >> k >> l;

        ll base_sale = min(k, l);
        total_base_sales += base_sale;

        ll doubled_sale = min(2*k, l);
        ll extra_gain = doubled_sale - base_sale;

        extra_sales.pb(extra_gain);
    }

    sort(allr(extra_sales));

    for(int i=0; i<f; i++){
        total_base_sales += extra_sales[i];
    }

    cout << total_base_sales << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}