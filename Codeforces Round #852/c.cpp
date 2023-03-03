// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// --debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=0 ; i<v.size() ; i++)
        cout<<v[i]<<" ";
    cout<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int &i : a)
            cin >> i;

        int l=0, r=n-1;
        int mn=1, mx=n;

        while(l<=r){
            if(a[l] == mn){
                l++;
                mn++;
            }
            else if(a[l] == mx){
                l++;
                mx--;
            }
            else if(a[r] == mn){
                r--;
                mn++;
            }
            else if(a[r] == mx){
                r--;
                mx--;
            }
            else{
                break;
            }
        }

        if(l > r){
            cout<<"-1\n";
        }
        else{
            cout<<l+1<<" "<<r+1<<'\n';
        }
    }

    return 0;
}