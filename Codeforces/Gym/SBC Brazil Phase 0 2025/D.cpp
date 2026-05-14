#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define rep(i, a, b) for (int i = (a); i < (b); i++)
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int n; cin >> n;
    string s, t; 
    cin >> s;
    cin >> t;
    
    ll x = 0, y = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '*') x++;
        if(t[i] == '*') y++;
    }

    float resp = 1-  (double)y/x;
    cout  << fixed << setprecision(2) << resp;

    return 0;
}

//bora pae