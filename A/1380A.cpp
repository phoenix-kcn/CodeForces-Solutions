// A. Three Indices
//link: https://codeforces.com/problemset/problem/1380/A
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
    
    int n;
    cin >> n;

    vi a;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.pb(x);
    }

    bool got_it = false;

    int j;
    for(j=1; j<n-1; j++){
        if(a[j]>a[j-1] && a[j]>a[j+1]){
           got_it = true;
           break;
        }
    }

    if(got_it){
        cout << "YES" << endl;
        cout << j-1+1 << " " << j+1 << " " << j+1+1 << endl;
    } else {
        cout << "NO" << endl;
    }

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