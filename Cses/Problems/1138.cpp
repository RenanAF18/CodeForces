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

const int MAXN = 2e5 + 5;

int n, q;

ll val[MAXN];
ll flat[2 * MAXN];

vector<int> adj[MAXN];

int tin[MAXN], tout[MAXN];
int timer = 0;

template<class T>
struct seg_tree {

    struct node {

        T x;

        node() : x(0) {}
        node(T x) : x(x) {}

        node operator + (const node &o) const {
            return node(x + o.x);
        }
    };

    int n;
    vector<node> tree;

    seg_tree(int n) : n(n), tree(n * 8) {}

    inline int left(int id) {
        return (id << 1);
    }

    inline int right(int id) {
        return (id << 1) | 1;
    }

    void build(int id, int l, int r) {

        if(l == r) {
            tree[id] = node(flat[l]);
            return;
        }

        int mid = (l + r) >> 1;

        build(left(id), l, mid);
        build(right(id), mid + 1, r);

        tree[id] = tree[left(id)] + tree[right(id)];
    }

    void set(int id, int l, int r, int pos, T val) {

        if(l == r) {
            tree[id] = node(val);
            return;
        }

        int mid = (l + r) >> 1;

        if(pos <= mid)
            set(left(id), l, mid, pos, val);
        else
            set(right(id), mid + 1, r, pos, val);

        tree[id] = tree[left(id)] + tree[right(id)];
    }

    node query(int id, int l, int r, int lq, int rq) {

        if(l > rq || r < lq)
            return node();

        if(lq <= l && r <= rq)
            return tree[id];

        int mid = (l + r) >> 1;

        return query(left(id), l, mid, lq, rq)
             + query(right(id), mid + 1, r, lq, rq);
    }
};

void dfs(int u, int p) {
    tin[u] = timer;
    flat[timer] = val[u];

    timer++;

    for(int v : adj[u]) {
        if(v == p) continue;
        dfs(v, u);
    }
    tout[u] = timer - 1;
    flat[timer++] = -flat[tin[u]];
}

void solve_tc() {
    cin >> n >> q;
    rep(i, 1, n + 1)
        cin >> val[i];

    rep(i, 0, n - 1) {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    dfs(1, 0);

    seg_tree<ll> seg(n);

    seg.build(1, 0, 2*n - 1);

    while(q--) {
        int op;
        cin >> op;

        if(op == 1) {
            int s;
            ll x;
            cin >> s >> x;
            val[s] = x;
            seg.set(1, 0, 2*n - 1, tin[s], x);
            seg.set(1, 0, 2*n - 1, tout[s]+1, -x);
        }
        else {
            int s;
            cin >> s;
            cout << seg.query(1, 0, 2*n - 1, 0, tin[s]).x << endl;
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc = 1;

    while(tc--)
        solve_tc();

    return 0;
}