// A. Polo the Penguin and Segments
//link: https://codeforces.com/contest/289/problem/A
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
    
    ll n, k, sum=0;
    cin >> n >> k;

    vi l(n); 
    vi r(n); 
    for(int i=0; i<n; i++){
        cin >> l[i] >> r[i];
    }

    for(int i=0; i<n; i++){
        int total = (r[i]-l[i] + 1);
        sum += total;
    }
    sum = sum%k;
    if(sum == 0) cout << 0;
    else
        cout << k-sum << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}