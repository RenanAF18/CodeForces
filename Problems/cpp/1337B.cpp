#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

void solve_tc(){

    int h, n, m; cin >> h >> n >> m;

    while(n-- && h > 20)
        h = h/2 + 10;
    while(m--)
        h -= 10;

    cout << (h <= 0 ? "YES\n" : "NO\n");

}

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int tc;
    cin >> tc;

    while(tc--) solve_tc();
    
    return 0;
}