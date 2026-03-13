// B. Ordinary Numbers
//link: https://codeforces.com/contest/1520/problem/B
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
    
    ll n, temp_n;
    cin >> n;
    temp_n = n;

    // long long int a[11] = {0, 1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111};
    long long int a[11] = {0, 1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 1111111111LL};
    // Main logic goes here
    int digits;
    digits = 0;

    while(temp_n > 0){
        digits++;
        temp_n /= 10;
    }

    if(n < 10){
        cout << n << endl;
    } else {
        cout << ((digits - 1) * 9) + (n / a[digits]) << endl;
        
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