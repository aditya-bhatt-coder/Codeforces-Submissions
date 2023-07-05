// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define input(v) for(auto &i : v) cin >> i
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
    vl a(n); input(a);

    bool aq = true;
    for(int i=0 ; i<n - 1 ; i++){
        if(a[i] != a[i + 1])
            aq = false;
    }

    if(aq or n == 1){
        cout << "1\n";
        return;
    }

    if(n == 2){
        cout << "2\n";
        return;
    }

    int i = 0, ans = 1;
    while(a[i] == a[i + 1]) i++;
    while(i < n - 1){
        int a1 = 0, a2 = 0;
        while(i < n - 1 and a[i] <= a[i + 1]){
            a1++; i++;
        }
        while(i < n - 1 and a[i] >= a[i + 1]){
            a2++; i++;
        }
        ans += a1 ? 1 : 0;
        ans += a2 ? 1 : 0;
    }

    cout << ans << "\n";
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