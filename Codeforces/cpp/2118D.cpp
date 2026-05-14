#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define rep(i, a, b) for (int i = (a); i < (b); i++)
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;



int main(){

    cin.tie(0)->sync_with_stdio(0);
    vector<ll> gcds(1e4);
    gcds[0]=1;

    for(int i = 1; i < 1e4; i++) 
        gcds[i] = gcds[i-1] * (i + 1);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        for(int i = 0; i < n; i++)
            cout << gcds[i] << " ";
        cout << "\n";
    }
    return 0;
}