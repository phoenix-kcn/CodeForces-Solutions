// A. Soft Drinking
//link: https://codeforces.com/contest/151/problem/A
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
    
    int n, k, l, c, d, p, nl, np, 
        total_drink, total_toast_possible, 
        total_limes_for_toast, total_salt_for_toast,
        toast, toast_per_n;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    total_drink = k * l;
    total_toast_possible = total_drink / nl;

    total_limes_for_toast = c * d;

    total_salt_for_toast = p / np;

    toast = min(total_toast_possible, min(total_limes_for_toast, total_salt_for_toast));
    toast_per_n = toast / n;

    cout << toast_per_n << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}