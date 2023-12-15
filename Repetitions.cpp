#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
 
signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    int sz = (int) s.size();
    s = s + "5";
    int count = 0, mx = 0;
    for(int i = 0; i < sz; i++){
        count++;
        if (s[i]==s[i+1]) continue;
        mx = max(count, mx);
        count = 0;
    }
    cout << mx << endl;
    return 0;
}
