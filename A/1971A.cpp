    // A. My First Sorting Problem
    //link: https://codeforces.com/contest/1971/problem/A
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
        
        int x, y;
        cin >> x >> y;

        if(x > y) cout << y << " " << x << endl;
        else cout << x << " " << y << endl;
        
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