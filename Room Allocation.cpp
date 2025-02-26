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



void solve(){
    int n; cin >> n;
    vector<pair<pair<int, int>, int>> v(n);
    vector<int> res(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i].first.first >> v[i].first.second;
        v[i].second = i;
    }

    sort(all(v));
    priority_queue<pair<int, int>> pq;
    // dept, room #
    int room_count = 0;

    for (int i = 0; i < n; i++){
        if (pq.empty() || -pq.top().first >= v[i].first.first){
            room_count++;
            pq.emplace(-v[i].first.second, room_count);
            res[v[i].second] = room_count;
        } else {
            auto min = pq.top();
            pq.pop();
            pq.emplace(-v[i].first.second, min.second);
            res[v[i].second] = min.second;
        }
    }
    cout<<room_count<<endl;
    for(auto&i:res)cout<<i<<' ';







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
