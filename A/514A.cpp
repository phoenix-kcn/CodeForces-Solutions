// A. Chewbaсca and Number
//link: https://codeforces.com/contest/514/problem/A
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
    
    string s; cin >> s;

    for(int i=0; i<s.size(); i++){
        if(s[i] == '5') cout << 4;
        else if(s[i] == '6') cout << 3;
        else if(s[i] == '7') cout << 2;
        else if(s[i] == '8') cout << 1;
        else if(s[i] == '4') cout << 4;
        else if(s[i] == '3') cout << 3;
        else if(s[i] == '2') cout << 2;
        else if(s[i] == '1') cout << 1;
        else if(s[i] == '0') {
            if(i != 0){
                cout << 0;
            }
        }
        else if(s[i] == '9'){
            if(i != 0){
                cout << 0;
            } else cout << 9;
        }
    }
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}