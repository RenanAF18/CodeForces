#include <bits/stdc++.h>
#include <climits>
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
int timer = 0;
vi tin(MAXN, -1), low(MAXN), subtree(MAXN);
ll ans = LLONG_MAX;
int n;
vector<vi> adj(MAXN);

void dfs(int v, int p) {
  tin[v] = low[v] = timer++;
  subtree[v] = 1;

  for (int u : adj[v]) {
    if (u == p)
      continue;

    if (tin[u] == -1) {
      dfs(u, v);
      low[v] = min(low[u], low[v]);
      subtree[v] += subtree[u];
      if (low[u] > tin[v]) {
        ll g1, g2;
        g1 = n - subtree[u];
        g2 = subtree[u];
        ans = min(ans, (g1 * (g1 - 1) / 2) + (g2 * (g2 - 1) / 2));
      }
    } else {
      low[v] = min(low[v], tin[u]);
    }
  }
}

void solve_tc() {
  int m;
  cin >> n >> m;

  timer = 0;
  ans = (ll)n * (n - 1) / 2;
  for (int i = 1; i <= n; i++) {
    tin[i] = -1;
    low[i] = 0;
    subtree[i] = 0;
    adj[i].clear();
  }

  while (m--) {
    int u, v;
    cin >> u >> v;

    adj[u].pb(v);
    adj[v].pb(u);
  }

  dfs(1, 0);
  cout << ans << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int tc;
  cin >> tc;
  while (tc--)
    solve_tc();

  return 0;
}
