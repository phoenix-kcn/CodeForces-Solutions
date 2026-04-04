// B. The 67th 6-7 Integer Problem
//link: https://codeforces.com/contest/2218/problem/B
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
    vi arr(7);
    int answer = 0;
    int max_num = -100;
    bool taken = false;
    
    for(int i=0; i<7; i++){
        cin >> arr[i];
        max_num = max(max_num, arr[i]);
    }

    for(int j=0; j<7; j++){
        if(arr[j] == max_num && !taken){
            answer += arr[j];
            taken = true;
        }
        else if(arr[j]<max_num){
            answer -= arr[j];
        }
        else if(arr[j]==max_num && taken){
            answer -= arr[j];
        }
    }

    cout << answer << endl;
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