#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vii;

void solve_tc(){

    int n, j, k; cin >> n >> j >> k;
    vector<string> perm;
    string aux = to_string(n);

    do{
        perm.push_back(aux);
    }while(next_permutation(aux.begin(), aux.end()));

    string val1 = perm[j-1];
    string val2 = perm[k-1];

    int equalsi = 0, difi = 0;

    for(int i = 0; i < (int)val1.size(); i++){
        if(val1[i] == val2[i])
            equalsi++;
    }

    for(int i = 0; i < (int)val1.size(); i++){
        for(int j = i + 1; j < (int)val1.size(); j++){
            if(val1[i] == val2[j])
                difi++;
        }
    }

    for(int i = 0; i < (int)val1.size(); i++){
        for(int j = i + 1; j < (int)val1.size(); j++){
            if(val1[j] == val2[i])
                difi++;
        }
    }

    cout << equalsi << "A" << difi << "B" << endl;

}

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int tc;
    cin >> tc;

    while(tc--) solve_tc();
    
    return 0;
}