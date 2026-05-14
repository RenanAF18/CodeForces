#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define rep(i, a, b) for (int i = (a); i < (b); i++)
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

ll INF = LLONG_MIN;
ll MAXN = 2 * 1e5;
vii seg(4 * MAXN);
vii a(MAXN + 1);

void build(int idx, int l, int r){
    if(l == r){
        seg[idx] = a[l];
        return;
    }
    int mid =(l + r)/2;

    build(idx*2, l, mid);
    build(idx*2+1, mid+1, r);

    seg[idx] = max(seg[idx*2], seg[idx*2+1]);
}

ll query(int idx, int l, int r, int lq, int rq){
    if(l > rq || r < lq) return INF;

    if(l >= lq && r <= rq) return seg[idx];
    
    int mid = (l + r)/2;
    return(max(query(idx*2, l, mid, lq, rq), query(idx*2+1, mid + 1, r, lq, rq)));
}


int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);

    vii resp(n + 1);
    for(int i = 1; i <= n; i++){
        ll l = 1, r = 1e18 -1;

        ll sum = a[i];
        while(l <= r){
            ll mid = (l + r)/2;
            ll v = a[i] + mid * k;

            ll mmax = 0;
            if(mid >= n)
                mmax = query(1, 1, n, 1, n);
            else{
                ll aux = n - i;
                if(i + mid < n)
                    mmax = query(1, 1, n, i, i + mid);
                else
                    mmax = max(query(1, 1, n, i, n), query(1, 1, n, 1, mid - aux));
            }
            
            if(mmax > v){
                r = mid - 1;
            }else{
                resp[i] = max((ll)(i + mid) % n + 1, resp[i]);
                l = mid + 1;
            }
        }
    }

    for(ll &x : resp) cout << x << " ";


    return 0;
}
