#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define rep(i, a, b) for (int i = (a); i < (b); i++)
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

ll dist(pii A, pii B){
    return (A.first - B.first) * (A.first - B.first) +
            (A.second - B.second) *  (A.second - B.second);
}

int main(){

    cin.tie(0)->sync_with_stdio(0);
    pii A, B, C, D;
    cin >> A.first >> A.second;
    cin >> B.first >> B.second;
    cin >> C.first >> C.second;
    cin >> D.first >> D.second;
    
    bool po = true;

    if(!(dist(A,B) == dist(B,C) && dist(B,C) == dist(C,D) && dist(C,D) == dist(D,A))) po = false;
    if(dist(A,C) != dist(B,D)) po = false;
    
    cout << (po ? "SIM" : "NAO");

    return 0;
}