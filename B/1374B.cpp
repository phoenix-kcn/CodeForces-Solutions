// B. Multiply by 2, divide by 6
//link: https://codeforces.com/problemset/problem/1374/B
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
    
    ll n;
    int count_of_2 = 0, count_of_3 = 0;
    cin >> n;
    while(n>1 && n%3==0){
        count_of_3++;
        n /= 3;
    }
    while(n>1 && n%2==0){
        count_of_2++;
        n /= 2;
    }
    if(n>1 || count_of_2>count_of_3){
        cout << -1 << endl;
        return;
    }
    else{
        cout << count_of_3 + (count_of_3 - count_of_2) << endl;
        return;
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