// B. Taxi
//link: https://codeforces.com/contest/158/problem/B
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
    
    int n;
    cin >> n;
    
    // Main logic goes here
    int cnt_1 = 0, cnt_2 = 0, cnt_3 = 0;
    int result = 0;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if(x==1) cnt_1++;
        else if(x==2) cnt_2++;
        else if(x==3) cnt_3++;
        else result++;
    }

    // 3 + 1 
    if(cnt_3>cnt_1){
        result += cnt_3;
        cnt_3 = 0;
        cnt_1 = 0;
    } else{
        result += min(cnt_1, cnt_3);
        cnt_1 -= min(cnt_1, cnt_3);
        cnt_3 -= min(cnt_1, cnt_3);
    }
    
    // 2 + 2 + 2 + ...
    result += (cnt_2 / 2);
    cnt_2 -= 2 * (cnt_2 / 2);

    // 1+1+1+1
    result += cnt_1 / 4;
    cnt_1 -= 4 * (cnt_1/4);

    if(cnt_1==3 && cnt_2==1){
        result += 2;
    } else if(cnt_1==3 && cnt_2==0){
        result++;
    } else if(cnt_1==0 && cnt_2==0){
        result += 0;
    } else {
        result++;
    }

    cout << result << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}