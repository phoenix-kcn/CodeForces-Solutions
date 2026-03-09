// A. Launch of Collider
//link: https://codeforces.com/contest/699/problem/A
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
    
    ll n, lol; cin >> n;
    string s; cin >> s;
    vi a(n); for(int i=0; i<n; i++) cin >> a[i];

    int flag = 0;
    int firstmoment = 0;

    for(int i=1; i<n; i++){
        if(s[i-1]=='R' && s[i]=='L'){
            int moment = (a[i] - a[i-1]) / 2;
            flag = 1;
            
            if(firstmoment == 0 || moment < firstmoment){
                firstmoment = moment;
            }
        }
    }

    if(flag){
        cout << firstmoment << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}