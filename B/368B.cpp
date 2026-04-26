// B. Sereja and Suffixes
//link: https://codeforces.com/problemset/problem/368/B
//author: https://codeforces.com/profile/iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vb = vector<bool>;
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

void solve(){
    int n, m;
    cin >> n >> m;

    vi a(n+1, 0);
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    vi suffix_distinct(n+1, 0);
    vb seen(1e5 + 10, false);

    int distinct_count = 0;

    for(int i=n; i>=1; i--){
        if(!seen[a[i]]){
            seen[a[i]] = true;
            distinct_count++;
        }
        suffix_distinct[i] = distinct_count;
    }

    while(m--){
        int l;
        cin >> l;

        cout << suffix_distinct[l] << endl;
    }

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}