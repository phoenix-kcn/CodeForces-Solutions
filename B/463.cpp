// B. Caisa and Pylons
//link: https://codeforces.com/contest/463/problem/B
//author: iam-phoenix
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
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define lll __int128
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define pi 3.14159265358979323846LL
#define MOD 676767677


void solve() {
    
    ll n, x, energy=0, res=0, prev=0;
    cin >> n;

    while(n--){
        cin >> x; 
        energy += (prev-x);
        if(energy<0) {
            res -= energy;
            energy = 0;
        }
        prev = x;
    }

    cout << res << endl;
}

int main() {
    
    fastio;
    
    solve();

    return 0;
}