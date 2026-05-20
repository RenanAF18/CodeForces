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
    int x, y; cin >> x >> y;
    int s = abs(x - y);
    int ans = 0;

    if(x != y){
        for(int i = 1; i <= s; i++){
            if(s % i == 0) ans++;
        }
    } else{
        ans = 1;
    }


    cout << ans << endl;
    for(int i = 1; i <= x + y; i++){
        if(i <= x) cout << 1 << " ";
        else cout << -1 << " ";
    }
    cout << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int tc; cin >> tc;
    while(tc--) solve_tc();
    
    return 0;
}