// A. Remove Smallest
//link: https://codeforces.com/contest/1399/problem/A
//author: iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using vvs = vector<vs>;
using vll = vector<ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'

void solve() {
    
    ll n; int base;
    cin >> n;
    
    
    // Main logic goes here
    vi nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    if(n == 1){
        cout << "YES" << endl;
        return;
    }
    
    sort(all(nums));
    base = nums[0];

    bool ok = 1;

    for(int i=1; i<n; i++){
        if(base+1 == nums[i] || base == nums[i]){
            base = nums[i];
        } else {
            ok = 0;
            break;
        }
    }
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;

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