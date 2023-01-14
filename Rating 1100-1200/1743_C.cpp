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
        int n; cin>>n;
        ll ans = 0;

        string s;
        cin>>s;

        vector<int> a(n);
        for(int &x : a) cin>>x;

        int ind = 0;
        while(ind < n){
            if(s[ind] == '1'){
                int start, end;
                if(ind - 1 >= 0 and s[ind - 1] == '0')   start = ind - 1;
                else
                    start = ind ;
                
                while(s[ind] == '1' and ind < n) ind++;
                
                end = ind - 1;

                // cout<<start<<" "<<end<<'\n';
                
                if(s[start] == '1'){
                    for(int i=start ; i<=end ; i++)
                        ans += a[i];
                }
                else{
                    int mn = INT_MAX;
                    for(int i=start ; i<=end ; i++){
                        ans += a[i];
                        mn = min(mn,a[i]);
                    }
                    ans -= mn;
                }
            }
            else
                ind ++ ;
        }

        cout<<ans<<'\n';
    }

    return 0;
}