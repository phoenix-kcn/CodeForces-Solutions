// B. Easter Eggs
//link: https://codeforces.com/contest/78/problem/B
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
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl


void solve() {
    
    ll n,div = 0;
    string s[] = {"R","O","Y","G","B","I","V"};
    string t;

    cin>>n;

    div = n/7;
    while(div--){
        for(int i=0; i<7; i++){
            t += s[i];
        }
    }
    if(n%7 == 1){
        t += "G";
    }
    else if(n % 7 == 2){
        t += "GB";
    }
    else if(n % 7 == 3){
        t += "YGB";
    }
    else if(n % 7 == 4){
        t += "YGBI";
    }
    else if(n % 7 == 5){
        t += "OYGBI";
    }
    else if(n % 7 == 6){
        t += "OYGBIV";
    }

    cout<<t<<endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}