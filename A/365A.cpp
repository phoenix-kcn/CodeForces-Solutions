// A. Good Number
//link: https://codeforces.com/contest/365/problem/A
//username: iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
using vll = vector<ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'

void solve() {
    
    ll n, k; //1234560
    cin >> n >> k;
    ll count = 0;
    vll a(n); for(ll &x: a) cin >> x;
    
    for(int i=0; i<n; i++){
        vector<bool> b(k+1);
        while(a[i] > 0){
            b[a[i]%10] = true;
            a[i] /= 10;
        }
        // for(int i=0; i<k+1; i++){
        //     cout << b[i] << " ";
        // } cout << endl;
        bool allTrue = true;
        for(int i=0; i<k+1; i++){
            if(b[i] == false){
                allTrue = false;
                break;
            }
        }
        if(allTrue){
            count++;
        }
    }
    cout << count << endl;
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}