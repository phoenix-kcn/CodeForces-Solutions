// A. k-th divisor
//link: https://codeforces.com/problemset/problem/762/A
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
    
    ll n, k;
    cin >> n >> k;
    
    // Main logic goes here
    vl divisors;
    for(ll i=1; i*i <= n; i++){
        if(n%i == 0){
            divisors.pb(i);
            if(i != n/i){
                divisors.pb(n/i);
            }
        }
    }

    sort(all(divisors));

    ll length = divisors.size();
    if(k>length) cout << -1 << endl;
    else cout << divisors[k-1] << endl;
    // for(int i=0; i<length; i++){
    //     cout <<i << " -> " << divisors[i] << endl;
    // }

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}