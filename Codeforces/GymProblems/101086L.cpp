#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

bool isprime(int x){
    int aux = 0;
    for(int i = 0; i <= 20; i++){
        if(x & (1 << i))
            aux++;
    }

    if(aux == 1) return false;

    for(int i = 2; i * i <= aux; i++){
        if(aux % i == 0) return false;
    }
    return true;
}

int main(){

    cin.tie(0)->sync_with_stdio(0);

    
    vii presum(1e5 + 1);
    presum[0] = 0;
    presum[1] = 0;

    for(int i = 2; i <= 1e5; i++){
        int aux = presum[i-1];
        if(isprime(i)){
            aux++;
        }
        presum[i] = aux;
    }

    int t; cin >> t;

    while(t--){
        int l, r; cin >> l >> r;
        cout << presum[r] - presum[max(0, l-1)] << "\n";
    }
    return 0;
}