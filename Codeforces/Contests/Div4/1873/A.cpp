#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

void solve_tc(){

    string s; cin >> s;
    if(s[0] == 'a' || s[1] == 'b' || s[2] == 'c')
        cout << "Yes\n";
    else
        cout << "No\n";

}

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int tc;
    cin >> tc;

    while(tc--) solve_tc();
    
    return 0;
}