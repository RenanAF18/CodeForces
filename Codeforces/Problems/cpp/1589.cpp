#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

void solve_tc(){

    int n; cin >> n;
    vii a(n);
    vii b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    
    ll dif = 0;
    bool acabou = false;
    for(int i = 0; i < n; i++){
        if(a[i] - b[i] == 0 && dif != 0){
            acabou = true;
            continue;
        }
        if((a[i] - b[i] != dif && dif != 0) || acabou){
            cout << "NO\n";
            return;
            }
        else
            dif = a[i] - b[i];3
    }
    cout << "YES\n";
}

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int tc;
    cin >> tc;

    while(tc--) solve_tc();
    
    return 0;
}