#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define rep(i, a, b) for (int i = (a); i < (b); i++)
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

string bin(ll n){
    string s = "";
    for (int bt = 63; bt >= 0; bt--){
        if ((n >> bt) & 1LL) s+='1';
        else s+='0';
    }
    return s;
}

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    ll x; cin >> x;
    int last = 0;

    for(int i = 63; i >= 0; i--){
        if((1LL << i) & x){
            last = i;
            break;
        }
    }

    cout << bin(x) << endl;

    ll y = 0;
    bool smaller = false; 
    
    for(int i = last; i >= 0; i--){
        if 
        int j = last - i;

        if(i < j) continue;

        bool xi = (x >> i) & 1;
        bool xj = (x >> j) & 1;

        if(i == j){
        if(smaller || xi){
            y |= (1LL << i);
        }
        continue;
        }

        if(!smaller){
            if(xi == xj){
                if(xi){
                    y |= (1LL << i);
                    y |= (1LL << j);
                }
            }
            //1 0 0 1 1 1 0 0
            //1 0 0 1 1 0 0 1
            if(x > (y | (1LL << i) | (1LL << j))){
                y |= (1LL << i);
                y |= (1LL << j);
            }
            
        }
        else{
            y |= (1LL << i);
            y |= (1LL << j);
        }
    }
    cout << y;
    


    return 0;
}
//bora paep