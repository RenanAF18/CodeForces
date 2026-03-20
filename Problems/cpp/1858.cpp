#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pii;

void solve_tc(){
    int n;
    cin >> n;

    bool first = true;
    for(int o = 1; o <= n; o += 2){
        int maior = o;
        while(maior * 2 <= n) maior *= 2;

        for(int x = maior; x >= o; x /= 2){
            if(!first) cout << ' ';
            cout << x;
            first = false;
        }
    }
    cout << '\n';
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tc;
    cin >> tc;
    while(tc--) solve_tc();
    return 0;
}