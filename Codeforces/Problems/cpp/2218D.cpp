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

vi sieve(int lim){
    vector<bool> prime(lim + 1, true);
    vi p;

    prime[0] = prime[1] = false;

    for(int i = 2; i <= lim; i++){
        if(prime[i]){
            p.pb(i);

            for(ll j = 1LL * i * i; j <= lim; j += i)
                prime[j] = false;
        }
    }

    return p;
}

void solve_tc(){
    int t; cin >> t;

    vi p = sieve(1000000);
    
    while(t--){
        int n; cin >> n;

        for(int i = 1; i < n+1; i++) cout << 1LL * p[i] * p[i-1] << " ";

        cout << endl;
    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int tc = 1;
    while(tc--) solve_tc();
    
    return 0;
}