// A. Candy Bags
//link: https://codeforces.com/problemset/problem/334/A
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
    
    int n, a, b;
    cin >> n;
    
    a = 1;
    b = n * n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n/2; j++){
            cout << a << " ";
            a++;
        }
        for(int j=0; j<n/2; j++){
            cout << b << " ";
            b--;
        } 
        cout << endl;
    }
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}