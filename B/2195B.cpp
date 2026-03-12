// B. Heapify 1
//link: https://codeforces.com/contest/2195/problem/B
//username: iam-phoenix
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

const int LG = 18;

void solve() {
    
    int n; cin >> n;
    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int t=0; t < LG; t++){
        for(int i=0; i * 2 + 1 < n; i++){
            if(a[i] > a[i * 2 + 1]){
                swap(a[i], a[i * 2 + 1]);
            }
        }
    }

    if(is_sorted(all(a))) cout << "YES" << endl;
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