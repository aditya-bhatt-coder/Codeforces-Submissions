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

void solve(){
    double n, b, h;
    cin >> n >> b >> h;

    double area = (b * h)/2.0;
    double ans = area;
    vector<double> a(n); inp(a);

    for(int i=0 ; i<n - 1 ; i++){
        if(a[i + 1] - a[i] >= h){
            ans += area;
            // cout << "area " << area << "\n";
        }
        else{
            double newh = (h - (a[i + 1] - a[i]));
            double newb = b * (newh/h);
            double val = (newb * newh)/2.0;
            ans += area - val;
            // cout << "val " << val << "\n";
        }
    }

    cout << fixed << setprecision(10) << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}