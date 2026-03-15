// A. I_love_%username%
//link: https://codeforces.com/contest/155/problem/A
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
    
    ll n; 
    int count, currentMax, currentMin;
    cin >> n;
    
    // Main logic goes here
    vi points(n);

    for(int i=0; i<n; i++){
        cin >> points[i];
    }
    currentMax = points[0];
    currentMin = points[0];
    count = 0;

    for(int i=1; i<n; i++){
        if(points[i] > currentMax){
            currentMax = points[i];
            count++;
        } else if(points[i] < currentMin){
            currentMin = points[i];
            count++;
        }
    }

    cout << count << endl;

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}