// C. Target Practice
//link: https://codeforces.com/contest/1873/problem/C
//username: iam-phoenix
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
    
    vs s(10);
    int sum;
    sum=0;

    for(int i=0; i<10; i++){
            cin >> s[i];
    }

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(i==0 || i==9){
                if(s[i][j] == 'X'){
                    sum += 1;
                }
            }
            else if(i==1 || i==8){
                if(j==0 || j==9){
                    if(s[i][j] == 'X') sum += 1;
                } else if( j>0 && j<9){
                    if(s[i][j] == 'X') sum += 2;
                }
            }
            else if(i==2 || i==7){
                if(j==0 || j==9){
                    if(s[i][j] == 'X') sum += 1;
                } else if( j==1 || j==8){
                    if(s[i][j] == 'X') sum += 2;
                } else if(j>1 && j<8){
                    if(s[i][j] == 'X') sum += 3;
                }
            }

            else if(i==3 || i==6){
                if(j==0 || j==9){
                    if(s[i][j] == 'X') sum += 1;
                } else if( j==1 || j==8){
                    if(s[i][j] == 'X') sum += 2;
                } else if(j==2 || j==7){
                    if(s[i][j] == 'X') sum += 3;
                } else if(j>2 && j<7){
                    if(s[i][j] == 'X') sum += 4;
                }
            }

            else if(i==4 || i==5){
                if(j==0 || j==9){
                    if(s[i][j] == 'X') sum += 1;
                } else if( j==1 || j==8){
                    if(s[i][j] == 'X') sum += 2;
                } else if(j==2 || j==7){
                    if(s[i][j] == 'X') sum += 3;
                } else if(j==3 || j==6){
                    if(s[i][j] == 'X') sum += 4;
                } else if(j==4 || j==5){
                    if(s[i][j] == 'X') sum += 5;
                }
            }

        }
    }
    
    cout << sum << endl;
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