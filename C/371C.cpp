// 
//link: 
//author: iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using vvs = vector<vs>;
using vll = vector<ll>;

// #define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'

void solve() {

    string st;
    cin >> st;
    
    ll nb, ns, nc, pb, ps, pc, price, ans = 0;
    int b, s, c;

    b = 0, s = 0 , c = 0;

    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> price;

    for(auto &ch: st){
        if(ch == 'B') b++;
        else if(ch == 'S') s++;
        else c++;
    }

    ll low = 0, high = 1e13 + 100;

    while(low <= high){
        ll mid = low + (high - low)/2;

        ll x = max(0LL, b*mid - nb);
        ll y = max(0LL, s*mid - ns);
        ll z = max(0LL, c*mid - nc);

        ll cost = pb*x + ps*y + pc*z;

        if(cost>price){
            high = mid - 1;
        } else {
            ans = mid;
            low = mid + 1;
        }

    }

    cout << ans << endl;

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}