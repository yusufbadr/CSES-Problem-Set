#include <bits/stdc++.h>

using namespace std;

//#define int long long
//#define ceil(a, b) ((a+b-1)/b)
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define mod ((int) 1e9+7)
#define INF LLONG_MAX
#define sq(x) ((x)*(x))
#define sz(a) (int) a.size()
#define PI (2*acos(0.0)) // M_PI

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,
        tree_order_statistics_node_update> indexed_set;



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
    int n, k; cin >> n >> k;
    indexed_set st;
    for (int i = 1; i <= n; i++){
        st.insert(i);
    }

    int idx = k;
    while (!st.empty()){
        idx %= (int)st.size();
        auto it = st.find_by_order(idx);
        cout << *it << " ";
        st.erase(it);
        idx+=k;
    }


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
