#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pii;

void solve_tc(){
    int n; cin >> n;
    vector<ll> v = vector<ll>(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int pos = 0;

    for(int i = 0; i < n; i++)
        if(v[i] > v[pos])
            pos = i;

    swap(v[0], v[pos]);
    

    for (int x : v)
        cout << x << " ";

    cout<<"\n";
}

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int tc;
    cin >> tc;

    while(tc--) solve_tc();
    
    return 0;
}