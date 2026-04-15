// 
//link: 
//author: iam-phoenix
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
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl


void solve() {
    
    vs s(3);
    for(int i=0; i<3; i++) cin >> s[i];
    
    map<char, int> m = {
        {'A', 0},
        {'B', 0},
        {'C', 0},
    };
    // Main logic goes here
    for(int i=0; i<3; i++){
        if(s[i][1] =='>') m[s[i][0]]++;
        else m[s[i][2]]++;
    }

    int val = 0;

    if(m['A']==m['B'] || m['B']==m['C'] || m['C']==m['A']){
        cout << "Impossible" << endl;
        return;
    }
    for(int i=0; i<3; i++){
        for(auto &pr: m){
            if(pr.second==val){
                cout << pr.first;
                val++;
            }
        }
    }
    


}

int main() {
    
    fastio;
    
    solve();

    return 0;
}