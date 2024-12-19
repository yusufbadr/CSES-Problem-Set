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

int maxCustomers(vector<pair<int, int>>& v) {
    vector<pair<int, int>> events;

    for (auto&i:v){
        events.emplace_back(i.first, 1);
        events.emplace_back(i.second, -1);
    }

    sort(events.begin(), events.end(), [](pair<int, int> p1, pair<int, int> p2) {
        if (p1.first == p2.first) return p1.second < p2.second;
        return p1.first < p2.first;
    });

    int mx=0, curr=0;

    for (auto&i:events){
        curr += i.second;
        mx = max(mx, curr);
    }

    return mx;

}

void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);
    for (auto&i:vec){
        cin >> i.first;
        cin >> i.second;
    }

    cout << maxCustomers(vec);




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
