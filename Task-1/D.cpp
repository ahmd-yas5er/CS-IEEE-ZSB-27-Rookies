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

    int n, k; cin >> n >> k;
    map<int, int> mp;
    iter(i, n){
        int x; cin >> x;

        if(mp.count(k - x)){
            cout << mp[k - x] << " " << i + 1 << endl;
            return;
        }
        mp[x] = i + 1;
    }
    cout << "IMPOSSIBLE";
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
