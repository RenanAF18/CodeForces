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

void solve_tc() {
  int n;
  cin >> n;
  vector<ll> a(n);
  for (ll &x : a)
    cin >> x;

  ll l = 0, r = 1e18;
  rep(i, 0, n - 1) {
    if (a[i] > a[i + 1]) {
      l = max(l, a[i] - a[i + 1]);
    } else if (a[i] < a[i + 1]) {
      r = min(r, a[i + 1] - a[i]);
    }
  }
  if (l <= r || (n == 3 && ()))
    yes();
  else
    no();
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int tc;
  cin >> tc;
  while (tc--)
    solve_tc();

  return 0;
}
