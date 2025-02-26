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

bool valid(const int& t, const vector<int>& v, const int& n){
    int total = 0;
    for (auto k:v){
        total+=t/k;
        if (total >=n) return true;
    }
    return total>=n;
}


void solve(){
    int n, x; cin >> n >> x;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first;
        v[i].second = i;
    }
     sort(all(v));

    for (int i = 0; i < n; ++i) {
        int target = x-v[i].first;
        int l = i+1, r = n-1;
        while (l<r){
            if (v[l].first + v[r].first < target) l++;
            else if (v[l].first + v[r].first > target) r--;
            else {
                cout << ++v[i].second << ' ' << ++v[l].second << ' ' << ++v[r].second;
                return;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;

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
