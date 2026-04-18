// B. Kuriyama Mirai's Stones
//link: https://codeforces.com/contest/433/problem/B
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
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl


void solve() {
    
    int n, m;
    cin >> n;

    vl v(n+1), u(n+1);
    v[0] = u[0] = 0;

    for(int i=1; i<n+1; i++){
        ll x;
        cin >> x;
        v[i] = x;
    }
    u = v;

    // total sum in each index in V
    for(int i=1; i<n+1; i++){
        v[i] = v[i] + v[i-1];
    }

    sort(all(u));

    // total sum in each index in U
    for(int i=1; i<n+1; i++){
        u[i] = u[i] + u[i-1];
    }
    
    // Main logic goes here
    cin >> m;

    while(m--){
        int type, l, r;
        cin >> type >> l >> r;

        if(type==1){
            cout << v[r] - v[l-1] << endl; 
        } else {
            cout << u[r] - u[l-1] << endl;
        }

    }

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}