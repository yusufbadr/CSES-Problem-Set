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

void YusufBadr(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

//int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
//int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};

void solve() {
    int n; cin >> n;

    if (n*(n+1)/2%2){
        cout << "NO" << endl;
        return;
    }

    int i;
    if (n%4==0) i = 4;
    else i=3;

    vector<int> v1, v2;
    for (int j=0; j<(n-1)/4; j++){
        v1.push_back(4*j+i+1);
        v1.push_back(4*j+i+4);

        v2.push_back(4*j+i+2);
        v2.push_back(4*j+i+3);
    }

    if (i==3){
        v1.push_back(1);
        v1.push_back(2);
        v2.push_back(3);
    } else {
        v1.push_back(1);
        v1.push_back(4);
        v2.push_back(2);
        v2.push_back(3);
    }

    cout << "YES" << endl;
    cout << v1.size() << endl;
    for (auto& k:v1) cout << k << ' ';
    cout << endl;

    cout << v2.size() << endl;
    for (auto& k:v2) cout << k << ' ';
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
