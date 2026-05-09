// B. 01 Game
//link: https://codeforces.com/problemset/problem/1373/B
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
    
    string s;
    cin >> s;
    
    // Main logic goes here
    int count[2] = {0, 0};
    int Alice = 0, Bob = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='0') count[0]++;
        else count[1]++;
    }

    // cout << count[0] << endl;
    // cout << count[1] << endl;

    if(count[0]==0 || count[1]==0) {
        cout << "NET" << endl;
        return;
    }
    bool taken = false;
    while(count[0]>0 && count[1]>0){
        if(!taken){
            Alice++;
            taken = true;
        } else {
            Bob++;
            taken = false;
        }
        count[0]--;
        count[1]--;
    }
    if(Alice>Bob){
        cout << "DA" << endl;
    } else if(Alice==Bob){
        cout << "NET" << endl;
    } else {
        cout << "NET" << endl;
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