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
    
    string s; cin >> s;
    int cnt = 1, ans = 1;
    iter (i, sz(s)-1){
        if (s.at(i) == s.at(i+1)) cnt++;
        else{
            ans = max(cnt, ans);
            cnt = 1;
        }
        ans = max(ans, cnt);
    }
    cout << ans;
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
