// Problem: B. Sum of Digits
// Link: https://codeforces.com/contest/102/problem/B
// Author: https://codeforces.com/profile/iam-phoenix
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
#define lll __int128
#define endl '\n'

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int countStepsToSingleDigit(int n) {
    int count = 0;
    
    while (n >= 10) {
        n = sumDigits(n);
        count++;
    }
    
    return count;
}

int main() {
    
    fastio;

    string s; cin >> s;

    int num = 0, answer;
    if(s.length()==1){
        cout << 0 << endl;
        return 0;
    }
    else {
        for(int i=0; i<s.length(); i++){
            if(s[i]!='0'){
                int x;
                x = s[i] - '0';
                num += x;
            }
        }
    }

    answer = countStepsToSingleDigit(num);

    cout << answer+1 << endl;

    return 0;
}