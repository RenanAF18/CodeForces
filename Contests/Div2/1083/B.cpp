#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pii;

void solve_tc(){

    ll n; cin >> n;
    ll k = 1;
    for (ll p = 2; p * p <= n; p++) {
        if (n % p == 0) {
            k *= p;
            while (n % p == 0) n /= p;
        }
    }

    if (n > 1) k *= n;
    
    cout << k << "\n";

}

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int tc;
    cin >> tc;

    while(tc--) solve_tc();
    
    return 0;
}