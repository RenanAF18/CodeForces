#include <bits/stdc++.h>
using namespace std;

void solve_tc() {
    int n; 
    cin >> n;
    
    vector<long double> c(n), p(n);
    
    for(int i=0;i<n;i++)
        cin >> c[i] >> p[i];

    long double f = 0;

    for(int i = n-1; i >= 0; i--) {
        long double d = 1.0L - p[i]/100.0L;
        f = max(f, c[i] + d * f);
    }

    cout << fixed << setprecision(10) << f << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while(tc--) solve_tc();
}