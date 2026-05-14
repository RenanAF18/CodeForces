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

string s;
vi cont;

bool possivel(int k, vi cnt) {
    for (int x = 0; x <= k; x++) {
        vi tmp = cnt; 
        int y = k - x;

        if (tmp[0] < x) continue;
        tmp[0] -= x;

        if (tmp[1] < y) continue;
        tmp[1] -= y;

        if (tmp[0] + tmp[1] < y) continue;

        int take0 = min(tmp[0], y);
        tmp[0] -= take0;
        y -= take0;
        tmp[1] -= y;

        int need = k;
        for (int d = 0; d <= 5; d++) {
            int take = min(tmp[d], need);
            tmp[d] -= take;
            need -= take;
        }

        if (need > 0) continue;

        int total = 0;
        for (int d = 0; d <= 9; d++)
            total += tmp[d];

        if (total >= x + k)
            return true;
    }

    return false;
}

void solve_tc(){
    int n; cin >> n;
    cin >> s;
    int ans = 0;
    cont = vi(10);
    for(char c : s) cont[c - '0']++;

    int l = 0, r = n/4;

    while(l <= r){
        int mid = (l + r)/2;
        vi cnt = cont;

        if(possivel(mid, cnt))
            ans = mid, l = mid + 1;
        else
            r = mid - 1;
    }

    cout << ans << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int tc; cin >> tc;
    while(tc--) solve_tc();
    
    return 0;
}