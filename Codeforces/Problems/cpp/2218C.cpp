#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

void solve_tc(){
    int n; cin >> n;
    
    int count = 3 * n;
    for(int i = 1; i <= n; i++){
        cout << i << " " << count-1 << " " << count << " ";
        count -= 2; 
    }
    cout << "\n";
    

}

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int tc;
    cin >> tc;

    while(tc--) solve_tc();
    
    return 0;
}