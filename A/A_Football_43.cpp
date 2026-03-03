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
    
    int n;
    cin >> n;
    
    // Main logic goes here
    vs teams(n);
    string answer;
    int score = 0; 
    for(int i=0; i<n; i++) cin >> teams[i];

    for(int i=0; i<n; i++){
        int counter = 0; 
        for(int j=0; j<n; j++){
            if(teams[i] == teams[j]) counter++;
        }
        if(counter > score){
            score = counter;
            answer = teams[i];
        }
    }
    cout << answer;
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}