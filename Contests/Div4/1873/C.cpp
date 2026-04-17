#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

void solve_tc(){

    vector<vector<char>> m(10, vector<char>(10));

    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            cin >> m[i][j];

    int sum = 0;

    for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        if(m[i][j] != 'X') continue;

        if(i == 0 || i == 9 || j == 0 || j == 9) sum += 1;
        else if(i == 1 || i == 8 || j == 1 || j == 8) sum += 2;
        else if(i == 2 || i == 7 || j == 2 || j == 7) sum += 3;
        else if(i == 3 || i == 6 || j == 3 || j == 6) sum += 4;
        else sum += 5;
    }
    }

    cout << sum << "\n";
}

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int tc;
    cin >> tc;

    while(tc--) solve_tc();
    
    return 0;
}