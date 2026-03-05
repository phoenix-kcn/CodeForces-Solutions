//A. Anton and Polyhedrons
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
    
    ll n, sum = 0;
    cin >> n;
    
    // Main logic goes here
    vs a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    for(int i=0; i<n; i++){
        if(a[i] == "Tetrahedron") sum += 4;
        else if(a[i] == "Cube") sum += 6;
        else if(a[i] == "Octahedron") sum += 8;
        else if(a[i] == "Dodecahedron") sum += 12;
        else if(a[i] == "Icosahedron") sum += 20;
    }

    cout << sum;
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