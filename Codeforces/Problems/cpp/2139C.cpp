#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll,ll> vii;

void solve_tc(){
    int k;
    ll x;
    cin >> k >> x;

    ll target = 1LL << k;

    vector<int> ops;
    ll cur = x;

    while(cur != target){
        if(cur < target){
            ops.push_back(1);
            cur *= 2;
        } else {
            ops.push_back(2);
            cur = 2 * (cur - target);
        }
    }

    reverse(ops.begin(), ops.end());

    cout << ops.size() << '\n';
    for(int i = 0; i < (int)ops.size(); i++)
        cout << ops[i] << " \n"[i+1 == (int)ops.size()];
    if(ops.empty()) cout << '\n';

}

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int tc;
    cin >> tc;

    while(tc--) solve_tc();
    
    return 0;
}