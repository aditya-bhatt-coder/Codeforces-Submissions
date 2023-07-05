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

int query(int l, int r){
    if(l == r)
        return -1;
    cout << "? " << l << " " << r << endl;
    int ans; cin >> ans;
    return ans;
}

void answer(int ans){
    cout << "! " << ans << endl;
}

void solve(){
    int n; cin >> n;
    int pos = query(1, n);

    if(query(1, pos) == pos){
        int l = 1, r = pos;
        while(l < r){
            int mid = (l + r + 1) >> 1;
            if(query(mid, pos) == pos){
                l = mid;
            }
            else{
                r = mid - 1;
            }
        }
        answer(l);
    }
    else{
        int l = pos, r = n;
        while(l < r){
            int mid = (l + r) >> 1;
            if(query(pos, mid) == pos){
                r = mid;
            }
            else{
                l = mid + 1;
            }
        }
        answer(l);
    }
}

int main()
{
    solve();
    return 0;
}