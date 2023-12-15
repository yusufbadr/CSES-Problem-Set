#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
 
signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    if (n==1) cout << n << endl;
    else if (n==2 || n==3) cout << "NO SOLUTION" << endl;
    else {
        // even odd
        for (int i = 2; i <=n; i+=2) cout << i << ' ';
        for (int i = 1; i <=n; i+=2) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
