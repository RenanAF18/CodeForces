#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define rep(i, a, b) for (int i = (a); i < (b); i++)
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    ll n, m, p, s; cin >> n >> m >> p >> s;
    vii conflicts(n+1);

    ll resp = 0;

    while(m--){
        ll x, y; cin >> x >> y;
        conflicts[x] |= 1LL << y;
        conflicts[y] |= 1LL << x;
    }

    ll e = 0;
    for(int i = 1; i <= p; i++){
        for(int j = p+1; j <= p + s; j++){
            if((conflicts[i] & (1LL << j)) != 0) continue;
            
            ll extras = n - p - s;
            for(int e = 0; e < (1LL << extras); e++){
                ll mask = (1LL << i) | (1LL << j) | (e << (p+s+1));
                bool valido = true;

                for(int x = 1; x <= n; x++){
                    if(((1LL << x) & mask) != 0){
                        if((conflicts[x] & mask) != 0)
                            valido = false;
                    }
                }
                if(valido) resp++;
            }
        }
    }
    
    cout << resp << endl;

    return 0;
}
//bora pae