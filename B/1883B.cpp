// B. Chemistry
//link: https://codeforces.com/problemset/problem/1883/B
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
    
    int n, k;
    string s;
    cin >> n >> k >>  s;

    int hsh[26] = {0};    
    // Main logic goes here
    for(int i=0; i<n; i++){
        hsh[s[i]-'a']++;
    }

    int odd_count = 0;
    for(int i=0; i<26; i++){
        if(hsh[i]%2 != 0){
            odd_count++;
        }
    }
    if(odd_count > k+1){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
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