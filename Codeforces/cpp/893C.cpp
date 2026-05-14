#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

inline void yes() { cout << "YES\n"; }
inline void no() { cout << "NO\n"; }
inline void j1() { cout << "Alice\n"; }
inline void j2() { cout << "Bob\n"; }

int MAXN = 1e5 + 1;
vector<vector<ll>> adj(MAXN);
vector<bool> visited(MAXN);
vector<ll> cost(MAXN);

ll minn;

void dfs(int u) {
    visited[u] = true;

    minn = min(minn, cost[u]);

    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}


void solve_tc(){
    int n, m; cin >> n >> m;

    rep(i, 1, n+1) cin >> cost[i];

    while(m--){
        int v, u; cin >> v >> u;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    ll ans = 0;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            minn = 1e18;

            dfs(i);

            ans += minn;
        }
    }

    cout << ans << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int tc = 1;
    while(tc--) solve_tc();
    
    return 0;
}