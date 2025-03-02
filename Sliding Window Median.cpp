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

multiset<int> low;
multiset<int> up;
int k, n;

void ins(int val){
    int med = *low.rbegin();
    if (med < val){
        up.insert(val);
        if (up.size() > k / 2){
            low.insert(*up.begin());
            up.erase(up.begin());
        }
    } else {
        low.insert(val);
        if (low.size() > (k + 1) / 2){
            up.insert(*low.rbegin());
            low.erase(--low.end());
        }
    }
}

void er(int val){
    if (up.find(val) != up.end()) up.erase(up.find(val));
    else low.erase(low.find(val));

    if (low.empty()){
        low.insert(*up.begin());
        up.erase(up.begin());
    }

}

void solve(){
    cin >> n >> k;
    vector<int> x(n); for(auto&i:x) cin >> i;
    low.insert(x[0]);
    for (int i = 1; i < k; ++i) ins(x[i]);
    cout << *low.rbegin() << ' ';

    for (int i = k; i < n; i++){
        if (k==1) ins(x[i]), er(x[i-k]);
        else er(x[i-k]), ins(x[i]);
        cout << *low.rbegin() << ' ';
    }
    cout << endl;





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
