#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define rep(i, a, b) for (int i = (a); i < (b); i++)
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int n, k; cin >> n >> k;
    vector<pii> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        cin >> v[i].second;
    }

    sort(v.begin(), v.end());

    rep(i, 0, n){
        if(v[i].first <= k) k += v[i].second;
        else break;
    }    

    cout << k;

    
    return 0;
}