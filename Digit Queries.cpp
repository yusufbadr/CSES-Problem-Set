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

int find_digit(int n){
    // 0-9 10-99 100-999
    // base * digits = number of digits in an interval
    int digits = 1;
    int base = 9;

    while (n - digits*base > 0){
        n -= base * digits;
        base *= 10;
        digits++;
    }

    int number = (int)pow(10, digits-1) + (n-1)/digits;

    int index = n % digits;

    int digit = number%10;

    if (index != 0) {
        digit = number / (int)pow(10, digits-index);
        digit = digit % 10;
    }

    return digit;
}


void solve(){
    int n;
    cin >> n;
    cout << find_digit(n) << endl;

}


signed main() {
    YusufBadr();
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
