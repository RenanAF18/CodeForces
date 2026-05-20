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

int MAXN = 1e5+1;
vector<vi>adj(MAXN);
vi tin(MAXN, -1), low(MAXN);
int timer = 0;

vector<pii> resp;


void dfs(int v, int p){
    tin[v] = low[v] = timer++;

    for(int u : adj[v]){
        if(u == p) continue;

        if(tin[u] == -1){
            dfs(u, v);
            low[v] = min(low[u], low[v]);

            if(low[u] > tin[v]) resp.pb({u, v});

        } else{
            low[v] = min(low[v], tin[u]);
        }
    }
}


void solve_tc(){
    int n, m; cin >> n >> m;
    for(int i = 0;  i < m; i++){
        int a, b; cin >> a >> b;

        adj[a].pb(b);
        adj[b].pb(a);
    }

    dfs(1, 0);

    cout << sz(resp) << endl;
    for(auto x : resp){
        cout << x.first << " " << x.second << endl;
    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int tc = 1;
    while(tc--) solve_tc();
    
    return 0;
}