#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
 
signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    while (true){
        cout << n << ' ';
        if (n==1) break;
        if (n%2) n = n*3+1;
        else n /= 2;
    }
    cout << endl;
    return 0;
}
 
 
