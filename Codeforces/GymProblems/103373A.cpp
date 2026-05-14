#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define rep(i, a, b) for (int i = (a); i < (b); i++)
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    string best = "";
    int gbest = -1, sbest = -1, bbest = -1;
    
    int n; cin >> n;
    while(n--){
        int g, s, b; cin >> g >> s >> b;
        string country;
        
        getline(cin >> ws, country);

        if(g > gbest){
            gbest = g;
            sbest = s;
            bbest = b;
            best = country;
        }
        else if(g == gbest && s > sbest){
            gbest = g;
            sbest = s;
            bbest = b;
            best = country;
        }
        else if(g == gbest && s == sbest && b > bbest){
            gbest = g;
            sbest = s;
            bbest = b;
            best = country;
        }
    }

    cout << best << endl;

    
    return 0;
}