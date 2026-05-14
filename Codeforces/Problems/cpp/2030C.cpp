#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll,ll> vii;

void solve_tc(){

    int n;
        string s;
        cin >> n >> s;

        bool win = (s[0] == '1' || s[n-1] == '1');
        for(int i = 0; i+1 < n && !win; i++)
            if(s[i] == '1' && s[i+1] == '1')
                win = true;

        cout << (win ? "YES" : "NO") << "\n";

}

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int tc;
    cin >> tc;

    while(tc--) solve_tc();
    
    return 0;
}