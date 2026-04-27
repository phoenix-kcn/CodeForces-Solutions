// B. Ilya and Queries
//link: https://codeforces.com/problemset/problem/313/B
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

    int length_s = s.length();

    int arr[length_s + 1] = {0};
    
    for(int i=1; i<=length_s; i++){
        if(s[i-1]==s[i]){
            arr[i+1] = 1;
        }
        arr[i+1] += arr[i];
    }

    // for(int i=1; i<=length_s; i++){
    //     cout << arr[i] << " ";
    // }

    int n;
    cin >> n;
    while(n--){
        int l, r;
        cin >> l >> r;

        cout << arr[r] - arr[l] << endl;
    }
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}