// B. Sort the Array
//link: https://codeforces.com/contest/451/problem/B
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
    
    int n, count = 0, L = 0, R = 0;
    cin >> n;

    vl a(n), b(n), c(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    b = a;
    c = a;

    sort(all(b));

    bool taken_1 = true;
    bool taken_2 = true;
    for(int i=0; i<n; i++){
        if(a[i] != b[i]){
            if(taken_1){
                L = i;
                taken_1 = false;
            }
        }
    }
    for(int i=n-1; i>=0; i--){
        if(a[i] != b[i]){
            if(taken_2){
                R = i;
                taken_2 = false;
            }
        }
    }
    reverse(c.begin() + L, c.begin() + (R + 1));

    if(c==b){
        cout << "yes" << endl;
        cout << L+1 << " " << R+1 << endl;
    } else{
        cout << "no" << endl;
    }
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}