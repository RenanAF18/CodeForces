#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define rep(i, a, b) for (int i = (a); i < (b); i++)
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    set<ll> v;

    for(int i = 0; i < 10; i++){
        int x; cin >> x;
        v.insert(x);
    }

    cout << 4 - (int)v.size() << "\n";
    
    return 0;
}