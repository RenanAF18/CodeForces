#include <bits/stdc++.h>
#include <filesystem>
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

  vi a(n), b(n);
  for (int i = 0; i < n; i++)
    cin >> a[i] >> b[i];

  sort(all(a));
  sort(all(b));

  int i = 0, j = 0;
  int c = 0;
  int ans = 0;

  while (i < n) {
    if (a[i] < b[j]) {
      c++;
      ans = max(ans, c);
      i++;
    } else {
      c--;
      j++;
    }
  }

  cout << ans << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int tc = 1;
  while (tc--)
    solve_tc();

  return 0;
}
