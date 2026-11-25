#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define iter(i, n) for (int i = 0; i < (n); i++)
#define vi vector<int>
#define pii  pair<int, int>
#define pll  pair<ll, ll>
#define endl '\n'

using ll = long long;
using namespace std;


void gameON() {

    int x, n, q; cin >> x >> n;
    vector<int> v(n);
    for (int &x:v) cin >> x; cin >> q;

    vector<bool> b(n, false);
    while (q--) {
        int p; cin >> p;
        p--;

        if (!b[p]) x += v[p];
        else x -= v[p];

        b[p] = !b[p];
        cout << x << endl;
    }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    // #ifndef ONmINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t = 1;
    //cin >> t;
    while(t--){
        gameON();
        cout << endl;
    }

    return 0;
}
