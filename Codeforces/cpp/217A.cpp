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

int n;

vector<pii> p;
vector<bool> vis;

void dfs(int u) {
    vis[u] = true;

    for (int v = 1; v <= n; v++) {

        if (u != v && !vis[v] && (p[u].first == p[v].first || p[u].second == p[v].second)) {
            dfs(v);
        }
    }
}

void solve_tc(){
    cin >> n;

    p = vector<pii>(n + 1);
    vis = vector<bool>(n + 1, false);

    for (int i = 1; i <= n; i++) {
        cin >> p[i].first >> p[i].second;
    }

    int comp = 0;

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i);
            comp++;
        }
    }

    cout << comp - 1 << endl;


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int tc = 1;
    while(tc--) solve_tc();
    
    return 0;
}