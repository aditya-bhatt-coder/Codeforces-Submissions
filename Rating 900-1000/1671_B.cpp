// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define input(v) for(auto &i : v) cin >> i
#define vi vector<int>
#define vii vector<vi>
#define vl vector<ll>
#define vvl vector<vl>
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

void solve(){
    int n; cin >> n;
    vi a(n); input(a);

    int g1 = 0, g2 = 0;
    for(int i=0 ; i<n - 1 ; i++){
        if(a[i + 1] - a[i] == 2)
            g1++;
        else if(a[i + 1] - a[i] == 3)
            g2++;
        else if(a[i + 1] - a[i] > 3){
            no; return;
        }
    }

    if((g1 <= 2 and g2 == 0) or (g1 == 0 and g2 == 1)){
        yes;
    }else{
        no;
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