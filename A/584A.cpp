#include <bits/stdc++.h>
using namespace std;


using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;


#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define rrep(i, a, b) for (int i = (a); i >= (b); --i)


void solve() {
    
    ll n, t;
    cin >> n >> t;
    
    if(n<1 || n>100 || t<2 || t>10){
        cout << -1;
        exit(0);
    } else if(t != 10){
        for(int i=0; i<n; i++) cout << t;
    } else {
        cout << 1;
        for(int i=0; i<n-1; i++) cout << 0;
    }
    
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}