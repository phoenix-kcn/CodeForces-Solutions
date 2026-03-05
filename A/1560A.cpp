// A. Dislike of Threes
#include <bits/stdc++.h>
using namespace std;


using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
using vll = vector<ll>;
using pii = pair<int, int>;


#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'


void solve() {
    int n; cin >> n;
    int i = 0, k = 1;
    vi series(1001);
    while(i<1000){
        if(k%3 == 0 || k%10 == 3){
            k++;
        } else{
            series[i] = k;
            i++;
            k++;
        }
        
    }
    cout << series[n-1] << endl;
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