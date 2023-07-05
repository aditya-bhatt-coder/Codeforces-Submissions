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
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

void f(int n,int m) { 
    if(n%2==0){
        if(m>=2)
            no;
        else
            yes;
        return;
    }

    for (int i = 3; i * i <= n; i = i+2){ 
        if(n%i==0){
            if(m>=i)
                no;
            else{
                yes;
            }
            return;
        }
    } 
    yes;
    return;
} 

void solve(){
    int n,m;
    cin>>n>>m;
    
    if(m >= n and n != 1){
        no; return;
    }
    f(n, m);
    
    return;
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