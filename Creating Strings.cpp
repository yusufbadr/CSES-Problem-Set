#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define ceil(a, b) ((a+b-1)/b)
#define mod ((int) 1e9+7)
#define INF LLONG_MAX
#define sq(x) ((x)*(x))
#define sz(a) (int) a.size()
#define PI (2*acos(0.0)) // M_PI

void YusufBadr(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

//int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
//int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
void permute(string& s, int l, int r, set<string>& ans){
    if (l>r){
        ans.insert(s);
    }
    for (int i = l; i <= r; i++){
        swap(s[l], s[i]);
        permute(s, l+1, r, ans);
        swap(s[l], s[i]);
    }

}


void solve(){
    string s;
    cin >> s;
    set<string> ans;
    permute(s, 0, (int)s.size()-1, ans);
    cout << ans.size() << endl;
    for (auto&i:ans) cout << i << endl;

}


signed main() {
    YusufBadr();
    int t = 1;
//    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
