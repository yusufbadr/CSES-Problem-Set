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
 
 
 
void solve() {
    string s; cin >> s;
    vector<int> v(26);
    for (auto& i:s){
        v[i-'A']++;
    }
 
    int cnt=0;
    int j=-1;
 
    for (int i = 0; i < 26; i++){
        if (v[i]%2==1){
            cnt++;
            j=i;
        }
        if (cnt>1){
            cout << "NO SOLUTION" << endl;
            return;
        }
    }
 
    string str;
    if (j!=-1){
        str+=(char)(j+'A');
        for (int z = 0; z < v[j] / 2; z++)
            str+=(char)(j + 'A');
        v[j]=0;
    }
 
    for (int i = 0; i < 26; i++) {
        if (i == j || v[i] < 2) continue;
        for (int z = 0; z < v[i] / 2; z++)
            str+=(char)(i + 'A');
    }
 
    string newStr = str;
    if (j!=-1)
        newStr.erase(newStr.begin());
    std::reverse(newStr.begin(), newStr.end());
 
    cout << newStr << str << endl;
 
 
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
