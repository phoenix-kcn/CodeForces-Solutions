// B. Right Maximum
//link: https://codeforces.com/contest/2204/problem/B
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
    
    ll n, max_value, max_index;
    cin >> n;
    
    // Main logic goes here
    vi nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    max_value = nums[0];
    max_index = 0;

    for(int i=1; i<n; i++){
        if(nums[i] >= max_value){
            max_value = nums[i];
            max_index = i+1;
        }
    }

    if(max_index == 1 || max_index == 0) cout << 1 << endl;
    else if(max_index == n) cout << n << endl;
    else {
        while (nums.size()  != 0){

        }
    }

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //int t;
    //cin >> t;
    //while (t--) {
    //    solve();
    //}
    
    solve();

    return 0;
}