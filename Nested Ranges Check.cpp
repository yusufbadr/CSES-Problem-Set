#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ceil(a, b) ((a+b-1)/b)
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define mod ((int) 1e9+7)
#define INF LLONG_MAX
#define sq(x) ((x)*(x))
#define sz(a) (int) a.size()
#define PI (2*acos(0.0)) // M_PI

//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,
//        tree_order_statistics_node_update> indexed_set;



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

struct range {
    int l, r, idx;

    bool operator<(const range& other){
        if (l==other.l) return r > other.r;
        return l < other.l;
    }
};



void solve(){
    int n; cin >> n;
    vector<range> v(n);
    vector<int> contains(n), contained(n);
    for (int i = 0; i < n; ++i) {
        v[i].idx=i;
        cin>>v[i].l>>v[i].r;
    }

    sort(all(v));

    int mn = INF;
    for (int i = n-1; i>=0; i--){
        if (v[i].r>=mn) contains[v[i].idx]=1;
        mn = min(mn, v[i].r);
    }

    int mx = -INF;
    for (int i = 0; i<n; i++){
        if (v[i].r<=mx) contained[v[i].idx]=1;
        mx = max(mx, v[i].r);
    }

    for(auto&i:contains)cout<<i<<' ';
    cout<<endl;


    for(auto&i:contained    )cout<<i<<' ';
    cout<<endl;


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
