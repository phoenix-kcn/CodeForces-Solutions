// B. Blank Space
//link: https://codeforces.com/contest/1829/problem/B
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
    
    int n;
    int longest, current;
    cin >> n;
    
    longest = 0;

    vi bin_arr(n);
    for(int i=0; i<n; i++){
        cin >> bin_arr[i];
    }
    
    for(int i=0; i<n; i++){
        if(bin_arr[i] == 0){
            current += 1;
        } else {
            current = 0;
        }
        longest = max(longest, current);
    }
    cout << longest << endl;
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