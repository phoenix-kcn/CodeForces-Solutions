// A. Square
//link: https://codeforces.com/contest/1921/problem/A
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

void solve() {
    
    int l = 0;

    vi a(4), b(4);

    for(int i=0; i<4; i++){
        cin >> a[i] >> b[i];
    }

    int x = a[0];
    
    if(a[0] != a[1]){
        l = (abs)(a[1]-a[0]);
    } else if(a[0] != a[2]){
        l = (abs)(a[2]-a[0]);
    } else if(a[0] != a[3]){
        l = (abs)(a[3]-a[0]);
    }

    cout << (l*l) << endl;
    
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