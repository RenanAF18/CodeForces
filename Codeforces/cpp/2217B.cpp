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

void solve_tc(){
     int n, k;
    cin >> n >> k;

    vi a(n);

    for (int &x : a) cin >> x;

    int p;
    cin >> p;
    p--;

    int x = a[p];

    int l = 0;
    int r = 0;

    for (int i = 0; i < p; ) {
        if (a[i] != x) {
            l++;

            while (i < p && a[i] != x)
                i++;
        } else {
            i++;
        }
    }

    for (int i = p + 1; i < n; ) {
        if (a[i] != x) {
            r++;

            while (i < n && a[i] != x)
                i++;
        } else {
            i++;
        }
    }

    cout << 2 * max(l, r) << '\n';
}


int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int tc; cin >> tc;
    while(tc--) solve_tc();
    
    return 0;
}