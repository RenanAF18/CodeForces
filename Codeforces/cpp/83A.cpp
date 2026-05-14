#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define rep(i, a, b) for (int i = (a); i < (b); i++)
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

int main(){

    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    ll ans = 0;
    ll cnt = 1;

    vii a(n);
    for (ll &x : a) cin >> x;

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i-1]) {
            cnt++;
        } else {
            ans += cnt * (cnt + 1) / 2;
            cnt = 1;
        }
    }

    ans += cnt * (cnt + 1) / 2;

    cout << ans << '\n';

    return 0;
}
