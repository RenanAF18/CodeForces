#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

const int INF = INT_MAX / 2;

struct SegTree {
    int n;
    vector<int> tree;

    SegTree() {}
    SegTree(vector<int>& a) : n(a.size()), tree(4 * a.size()) {
        build(a, 1, 0, n - 1);
    }

    void build(vector<int>& a, int node, int l, int r) {
        if (l == r) {
            tree[node] = a[l];
            return;
        }

        int mid = (l + r) / 2;
        build(a, 2 * node, l, mid);
        build(a, 2 * node + 1, mid + 1, r);
        
        tree[node] = min(tree[2 * node], tree[2 * node + 1]);
    }

    void update(int node, int l, int r, int pos, int val) {
        if (l == r) { 
            tree[node] = val; 
            return; 
        }

        int mid = (l + r) / 2;
        if (pos <= mid) update(2 * node, l, mid, pos, val);
        else update(2 * node + 1, mid + 1, r, pos, val);
        
        tree[node] = min(tree[2 * node], tree[2 * node + 1]);
    }

    int query(int node, int l, int r, int ql, int qr) {
        if (ql > qr || l > qr || r < ql) 
            return INF;
        
        if (ql <= l && r <= qr) 
            return tree[node];
        
        int mid = (l + r) / 2;
        return min(query(2 * node, l, mid, ql, qr),
                   query(2 * node + 1, mid + 1, r, ql, qr));
    }
};

void solve_tc(){
    int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int& x : a) cin >> x;
        for (int& x : b) cin >> x;

        SegTree seg(a);

        map<int, set<int>> pos;
        for (int i = 0; i < n; i++) pos[a[i]].insert(i);

        bool ok = true;
        for (int i = 0; i < n; i++) {
            int v = b[i];

            auto it = pos.find(v);
            if (it == pos.end() || it->second.empty()) {
                ok = false;
                break;
            }

            int p = *it->second.begin();

            if (seg.query(1, 0, n - 1, 0, p) < v) {
                ok = false;
                break;
            }

            it->second.erase(it->second.begin());
            if (it->second.empty()) pos.erase(it);
            seg.update(1, 0, n - 1, p, INF);
        }

        cout << (ok ? "YES" : "NO") << "\n";

}

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int tc;
    cin >> tc;

    while(tc--) solve_tc();
    
    return 0;
}