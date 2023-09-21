// GOD GIVES HIS TOUGHEST BATTLES TO HIS STRONGEST SOLDIERS !

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define inp(v) for(auto &i : v) cin >> i
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define vvl vector<vl>
#define pb push_back
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

vector<array<ll, 2>> vpr(901);

void solve(){
        ll n, k;
        cin >> n >> k;

        if (k >= 901) {
            cout<<0<<endl;
            return;
        }

        array<ll, 2> val = vpr[k];
        ll result = 0;
        for (int i = 0; i <= n; ++i) {
            ll temp = (n - val[0] * i);
            if (temp % val[1] == 0) {
                if (temp / val[1] >= i) {
                    ++result;
                }
            }
        }

        cout << result << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;

    array<ll, 2> prev_prev = {1, 0}, prev = {0, 1};
    vpr[1] = prev_prev;
    vpr[2] = prev;
    for (int i = 3; i < 901; ++i) {
        prev_prev = vpr[i - 2];
        prev = vpr[i - 1];
        array<ll, 2> new_one;
        new_one[0] = prev_prev[0] + prev[0];
        new_one[1] = prev_prev[1] + prev[1];
        vpr[i] = new_one;
        prev_prev = prev;
        prev = new_one;
    }

    while(tc--){
        solve();
    }

    return 0;
}