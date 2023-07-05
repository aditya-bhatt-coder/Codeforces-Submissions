// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define input(v) for(auto &i : v) cin >> i
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

void solve(){
    int n; cin >> n;
    vector<int> a(n), b(n);
    input(a); input(b);
    int mxa = a[n - 1], mxb = b[n - 1];
    // print(a); print(b);

    for(int i=0 ; i<n ; i++){
        if(a[i] > mxa or b[i] > mxb){
            swap(a[i], b[i]);
        }
        if(a[i] > mxa or b[i] > mxb){
            no; return;
        }
    }

    yes;
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