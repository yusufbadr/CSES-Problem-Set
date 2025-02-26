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

bool valid (int maxSum, int k, const vector<int>& v){
    int cnt=0;
    int csum=0;
    int i = 0;
    int sz = (int) v.size();
    while (i<sz){
        if (v[i] > maxSum) return false;
        csum+=v[i];
        if (csum>maxSum) {
            cnt++;
            csum=0;
        } else {
            i++;
        }
    }
    cnt++;
    return cnt<=k;


}


void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int lo=-1, hi=0;
    for (auto&i:v) {
        cin >> i;
        lo = max(i, lo);
        hi += i;
    }
    
    int ans;
    while (lo<=hi){
        int mid = (lo+hi)/2;
        if (!valid(mid, k, v)){
            lo=mid+1;
        } else {
            ans=mid;
            hi=mid-1;
        }
    }
    cout << ans << endl;


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
