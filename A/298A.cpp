// A. Snow Footprints
//link: https://codeforces.com/contest/298/problem/A
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
    int n, start, end; cin >> n;
    string s; cin >> s;

    for(int i=0; i<n; i++){
        if(s[i] != '.'){
            start = i+1;
            break;
        }
    }

    for(int i=start-1; i<n; i++){
        if(s[i] == 'L'){
            end = i;
            break;
        } else if(s[i] == '.'){
            end = i+1;
            break;
        }
    }

    cout << start << " " << end << endl;

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}