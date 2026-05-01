#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define rep(i, a, b) for (int i = (a); i < (b); i++)
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int k; cin >> k;
    string s; cin >> s;
    string compar = "tamocompetindo";
    bool possible = false;

    for(int i = 0; i + 14 <= (int)s.size(); i++){
    int att = 0;
    int cont = 0;

    while(cont < 14){
        if(s[i + cont] != compar[cont]){
            att++;
            if(att > k) break;
        }
        cont++;
    }

    if(cont == 14){
        possible = true;
        break;
    }
}

    cout << (possible ? "SIM" : "NAO");
    return 0;
}
