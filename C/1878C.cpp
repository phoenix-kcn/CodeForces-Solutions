// C. Vasilije in Cacak
//link: https://codeforces.com/problemset/problem/1878/C
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

const int N = 1e6+10;
ll arr[N];

void solve() {
    
    ll n, k, x;
    cin >> n >> k >> x;
    
    // Main logic goes here
    // for(int i=1; i<=n; i++){
    //     if(arr[i+k]==arr[i]){
    //         cout << "YES" << endl;
    //         return;
    //     }
    // }
    ll maxi = arr[n] - arr[n-k];
    ll mini = arr[k];
    
    // cout << maxi << endl;
    // cout << mini << endl;

    if(x<=maxi && x>=mini){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=1; i<N; i++){
        arr[i] = arr[i-1] + i;
    }

    int t;
    cin >> t;
    while (t--) {
       solve();
    }

    return 0;
}
