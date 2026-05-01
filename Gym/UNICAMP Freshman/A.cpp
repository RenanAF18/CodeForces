#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define rep(i, a, b) for (int i = (a); i < (b); i++)
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int p, r, g, x;
    cin >> p >> r >> g >> x;

    ll ans = min(r, g * x);
    ans *= p;

    cout << ans << "\n";

    
    return 0;
}