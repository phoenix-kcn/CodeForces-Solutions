// A. Insomnia cure
//link: https://codeforces.com/contest/148/problem/A
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
    
    ll k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    set<int> lol;

    for(int i=k; i<=d; i++){
        if(i%k == 0){
            lol.insert(i);
        }
    }

    for(int i=l; i<=d; i++){
        if(i%l == 0){
            lol.insert(i);
        }
    }

    for(int i=m; i<=d; i++){
        if(i%m == 0){
            lol.insert(i);
        }
    }

    for(int i=n; i<=d; i++){
        if(i%n == 0){
            lol.insert(i);
        }
    }
    cout << lol.size() << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}