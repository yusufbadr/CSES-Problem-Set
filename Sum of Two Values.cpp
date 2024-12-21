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

int bin_search(vector<pair<int, int>>& v, int target, int idx){
    int k = 0;
    int n = (int)v.size();
    for (int b=n/2; b>=1; b/=2){
        while (k+b<n && v[k+b].first<=target) k+=b;
    }

    // target at k

    if (v[k].first == target && k != idx) {
        return k;
    } else if (k-1>=0 && v[k-1].first == target) {
        return k-1;
    } else if (k+1<n && v[k+1].first == target) {
        return k+1;
    } else {
        return -1;
    }

}



void solve(){
    int n, x; cin >> n >> x;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i].first;
        v[i].second = i;
    }

    sort (all (v), [](pair<int, int>& p1, pair<int, int>& p2) {
        return p1.first < p2.first;
    });

    for (int i = 0; i < n; i++){
        int t = bin_search(v, x-v[i].first, i);
        if (t!=-1) {
            cout << ++v[i].second << " " << ++v[t].second << endl;
            return;
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
