// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
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
    vi a(n), std(n); input(a);

    if(n == 1){
        print(a);
        return;
    }

    std = a;

    sort(rall(std));

    if(std[0] == a[0]){
        // find second high
        int mxid = 0;
        for(int i=0 ; i<n ; i++){
            if(std[1] == a[i]){
                mxid = i;
                break;
            }
        }
        for(int i=mxid ; i<n ; i++)
            cout << a[i] << " ";

        int l = 0, r = mxid - 1;
        
        if(mxid == n - 1){
            while(r >= 0 and l < r){
                if(a[l] < a[r]){
                    cout << a[r] << " ";
                    r--;
                } else{
                    for( ; l<=r ; l++)
                        cout << a[l] << " ";
                }
            }
            
            if(a[l] == a[r])
            cout << a[l] << " ";
        }
        else{
            cout << a[r] << " ";
            r--;
            while(r >= 0 and l < r){
                if(a[l] < a[r]){
                    cout << a[r] << " ";
                    r--;
                } else{
                    for( ; l<=r ; l++)
                        cout << a[l] << " ";
                    break;
                }
            }
            
            if(a[l] == a[r])
            cout << a[l] << " ";
        }
    }
    else{
        int mxid = 0;
        for(int i=0 ; i<n ; i++){
            if(std[0] == a[i]){
                mxid = i;
                break;
            }
        }
        for(int i=mxid ; i<n ; i++)
            cout << a[i] << " ";

        int l = 0, r = mxid - 1;
        
        if(mxid == n - 1){
            while(r >= 0 and l < r){
                if(a[l] < a[r]){
                    cout << a[r] << " ";
                    r--;
                } else{
                    for( ; l<=r ; l++)
                        cout << a[l] << " ";
                }
            }
            
            if(a[l] == a[r])
            cout << a[l] << " ";
        }
        else{
            cout << a[r] << " ";
            r--;
            while(r >= 0 and l < r){
                if(a[l] < a[r]){
                    cout << a[r] << " ";
                    r--;
                } else{
                    for( ; l<=r ; l++)
                        cout << a[l] << " ";
                    break;
                }
            }
            
            if(a[l] == a[r])
            cout << a[l] << " ";
        }
    }

    cout << "\n";
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