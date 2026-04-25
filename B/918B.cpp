// B. Radio Station
//link: https://codeforces.com/problemset/problem/918/B
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
    
    int n, m;
    cin >> n >> m;
    
    vs name_1(n), ip_1(n);
    vs name_2(m), ip_2(m);

    // Main logic goes here
    for(int i=0; i<n; i++) {
        cin >> name_1[i] >> ip_1[i];
    }
    
    for(int j=0; j<m; j++) {
        cin >> name_2[j] >> ip_2[j];
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            // cout << name_2[i] << " " << ip_2[i] << endl;
            // cout << name_1[j] << " " << ip_1[j] << endl;
            string x = ip_1[j] + ';';
            if(x==ip_2[i]){
                cout << name_2[i] << " " << x << " " << "#" << name_1[j] << endl;
            }
            // cout << x << endl;
        }
    }

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}