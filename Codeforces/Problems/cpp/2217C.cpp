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
  ll n, m, a, b;
  cin >> n >> m >> a >> b;

  bool possible = (gcd(n, a) == 1 and gcd(m, b) == 1 and gcd(n, m) <= 2);

  cout << (possible ? "YES" : "NO") << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int tc;
  cin >> tc;
  while (tc--)
    solve_tc();

  return 0;
}
