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

void gameON(){

    int n; cin >> n;
    ll sum = 1LL*n*(n+1)/2;
    if (sum % 2){
        cout << "NO";
        return;
    }

    ll t = sum / 2;
    vi a, b;
    for (int i = n; i >= 1; i--){
        if (i <= t){
            a.push_back(i);
            t -= i;
        }
        else b.push_back(i);
    }

    cout << "YES" << endl;

    cout << sz(a) << endl;
    for (int x : a) cout << x << ' ';
    cout << endl;

    cout << sz(b) << endl;
    for (int x : b) cout << x << ' ';
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
