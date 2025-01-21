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

int cnt = 0;
set<int> col, posD, negD;
void backtrack(int r, vector<string>& board){
    if (r==8){
        cnt++;
    }

    for (int c = 0; c < 8; c++){
        if (col.count(c) || posD.count(r+c) || negD.count(r-c) || board[r][c]=='*') continue;

        col.insert(c);
        posD.insert(r+c);
        negD.insert(r-c);

        backtrack(r+1, board);

        col.erase(c);
        posD.erase(r+c);
        negD.erase(r-c);
    }


}


void solve(){
    vector<string> v(8);
    for (auto&i:v) cin >> i;

    backtrack(0, v);

    cout << cnt << endl;


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
