// 
//link: 
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
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl


void solve() {
    
    int n; 
    cin >> n;

    string s, result = "";
    cin >> s;

    if(n==1){ 
        cout << s;
        return;
    }
    else if(n==2){ 
        cout << s;
        return;
    }

    for(int i=0; i<n; i++){
        result += ".";
    }

    if(n%2 == 0){
        int k = n/2 - 1;
        int j = 0, l = 1;

        for(int i=0; i<n; i++){
            if(i%2 == 0) {
                result[k-j]=s[i];
                j++;
            } else if(i%2 != 0) {
                result[k+l]=s[i];
                l++;
            }

        }
    } else {
        int k = n/2;
        int j = 0, l = 1;
        for(int i=0; i<n; i++){
            if(i%2 == 0) {
                result[k+j]=s[i];
                j++;
            } else if(i%2 != 0) {
                result[k-l]=s[i];
                l++;
            }

        }
    }

    cout << result << endl;
}   

int main() {
    
    fastio;

    solve();

    return 0;
}