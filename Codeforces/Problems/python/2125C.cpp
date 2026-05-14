#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll,ll> lii;

ll countt(ll x){
    return (x/2) + (x/3) + (x/5) + (x/7) 
    - (x/6) - (x/14) - (x/15) - (x/21) - (x/10) - (x/35) +
    (x/70) + (x/42) + (x/105) + (x/30) - 
    (x/210);
}

void solve_tc(){

    ll l, r;
    cin >> l >> r;
    l--;

    ll a = countt(r);
    ll b = countt(l);

    cout << r - l - (a - b) << "\n";

}

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int tc;
    cin >> tc;

    while(tc--) solve_tc();
    
    return 0;
}