#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }

    int sum = 0;

    for(int j = 0; j < m; j++){
        int mmax = 0;
        for(int i = 0; i < n; i++){
            mmax = max(mmax, v[i][j]);
        }
        sum += max(1, mmax);
    }

    cout << sum << '\n';

    return 0;
}