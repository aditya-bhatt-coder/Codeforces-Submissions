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
    int n; cin >> n;
    vi a(n); inp(a);

    if(n == 1){
        cout << "0\n";
        return;
    }

    int pos = 0, neg = 0, z = 0;

    int jh = 0, jl = 0;
    int h = INT_MIN;
    int l = INT_MAX;
    for(int i=0 ; i<n ; i++){
        if(a[i] > h){
            h = a[i];
            jh = i;
        }
        if(a[i] < l){
            l = a[i];
            jl = i;
        }
        if(a[i] > 0){
            pos++;
        }
        if(a[i] < 0){
            neg++;
        }
        if(a[i] == 0){
            z++;
        }
    }

    if(pos + z == n){
        cout << n - 1 << "\n";
        for(int i=1 ; i<n ; i++){
            cout << i + 1 << " " << i - 1 + 1 << "\n";
        }
        return;
    }

    if(neg + z == n){
        cout << n - 1 << "\n";
        for(int i=n-2 ; i>=0 ; i--){
            cout << i + 1 << " " << i + 1 + 1 << "\n";
        }
        return;
    }

    auto allpos = [=](vector<int> arr){
        vvi ans;
        while(arr[jh] < abs(l)){
            ans.pb({jh + 1, jh + 1});
            arr[jh] += arr[jh];
        }
        for(int i=0 ; i<n ; i++){
            if(arr[i] < 0){
                ans.pb({i + 1, jh + 1});
                arr[i] += arr[jh];
            }
        }
        for(int i=1 ; i<n ; i++){
            arr[i] += a[i - 1];
            ans.pb({i + 1, i - 1 + 1});
        }
        return ans;
    };

    auto allneg = [=](vector<int> arr){
        vvi ans;
        while(abs(arr[jl]) < h){
            ans.pb({jl + 1, jl + 1});
            arr[jl] += arr[jl];
        }
        for(int i=0 ; i<n ; i++){
            if(arr[i] > 0){
                ans.pb({i + 1, jl + 1});
                arr[i] += arr[jl];
            }
        }
        for(int i=n-2 ; i>=0 ; i--){
            arr[i] += a[i + 1];
            ans.pb({i + 1, i + 1 + 1});
        }
        return ans;
    };

    vvi a1 = allpos(a);
    vvi a2 = allneg(a);

    // cout << a1.size() << " " << a2.size() << "\n";

    if(a1.size() < a2.size()){
        cout << a1.size() << "\n";
        for(auto it : a1)
            cout << it[0] << " " << it[1] << "\n";
    } else{
        cout << a2.size() << "\n";
        for(auto it : a2)
            cout << it[0] << " " << it[1] << "\n";
    }
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