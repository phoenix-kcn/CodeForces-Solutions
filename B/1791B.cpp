// B. Following Directions
//link: https://codeforces.com/contest/1791/problem/B
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
    
    int n; string s;
    cin >> n >> s;
    
    int X = 0, Y = 0;

    // Main logic goes here
    for(int i=0; i<n; i++){
        if(s[i] == 'R') X++;
        else if(s[i] == 'L') X--;
        else if(s[i] == 'U') Y++;
        else if(s[i] == 'D') Y--;

        if(X==1 && Y==1){
            cout << "YES" << endl;
            return;
        }

    }
    cout << "NO" << endl;
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