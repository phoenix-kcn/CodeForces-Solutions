// B. Fence
//link: https://codeforces.com/contest/363/problem/B
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

const int N = 1e6;
int arr[N];

void solve() {
    
    int n, k;
    cin >> n >> k;
    
    map<int, int> m;
    // Main logic goes here
    arr[0] = 0;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
        arr[i] = arr[i] + arr[i-1];
    }
    if(n==1){
        cout << 1 << endl;
        return;
    } else if(n==2 && k==1){
        if(arr[1]>(arr[2]-arr[1])){
            cout << 2 << endl;
            return;
        } else {
            cout << 1 << endl;
            return;
        }
    } else if(n==k){
        cout << 1 << endl;
        return;
    }

    for(int i=3; i<=n; i++){
        m.insert({arr[i] - arr[i-k], i-2});
    }

    auto firstElement = m.begin();
    cout << firstElement->second << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    solve();

    return 0;
}