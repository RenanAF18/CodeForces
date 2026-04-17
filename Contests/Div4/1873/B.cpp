#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

void solve_tc(){
    int n; cin >> n;
    vector<ll> a(n);

    for(ll &x : a) cin >> x;

    ll best = 0;

    for(int i = 0; i < n; i++){
        ll att = 1;
        for(int j = 0; j < n; j++){
            if(j == i)
                att *= (a[j] + 1);
            else
                att *= a[j];
        }
        best = max(best, att);
    }

    cout << best << "\n";

}

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int tc;
    cin >> tc;

    while(tc--) solve_tc();
    
    return 0;
}