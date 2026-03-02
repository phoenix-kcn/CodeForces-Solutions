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
    
    ll n, k; cin >> n >> k;
    if(n%2 == 0){
        if(n/2 >= k){
            cout << (2*k - 1);
        } else {
            cout << (2*(k - n/2));
        }
    } else {
        if((n/2 + 1) >= k){
            cout << (2*k - 1);
        } else {
            cout << (2*(k - (n/2 + 1)));
        }
    }
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}