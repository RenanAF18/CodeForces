#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;

    vector<int> cnt(26, 0);
    for(char c : t) cnt[c-'a']++;
    for(char c : s) cnt[c-'a']--;

    for(int x : cnt) {
        if(x < 0) { cout << "Impossible\n"; return; }
    }

    string extra;
    for(int i = 0; i < 26; i++)
        extra += string(cnt[i], char('a'+i));

    string result;
    int ei = 0;
    for(char c : s) {
        while(ei < (int)extra.size() && extra[ei] < c)
            result += extra[ei++];
        result += c;
    }
    while(ei < (int)extra.size())
        result += extra[ei++];

    cout << result << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    while(T--) solve();
}