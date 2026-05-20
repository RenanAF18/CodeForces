#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

void solve_tc(){

    ll t, h, u; cin >> t >> h >> u;
    ll resp = 0;

    ll auxt = min(t, u);
    
    resp += 4 * auxt;
    t -= auxt;
    u -= auxt;

    if(u){
        resp += 3 * u;
        resp += 3 * h;
    }else{
        int minh = min(t/2, h);
        resp += 7 * minh;
        t -= 2 * minh;
        h -= minh;

        if(t){
            if(h){
                resp += 5;
                t--;
                h--;
            }
        }

        resp += 2 * t + 1;
        resp += 3 * h;
    }

    cout << resp << "\n";
}

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int tc;
    cin >> tc;

    while(tc--) solve_tc();
    
    return 0;
}