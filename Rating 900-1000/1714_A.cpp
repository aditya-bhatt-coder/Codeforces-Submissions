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
        int n,H,M; cin>>n>>H>>M;

        int ans = INT_MAX;

        for(int i=0 ; i<n ; i++){
            int h,m,tans;
            cin>>h>>m;

            if(H<h){
                tans = 60 - M;
                h--;
                tans += m;
                tans += 60 * (h-H);
                // cout<<tans<<"\n";
            }
            else if(H>h){
                tans = m;
                tans += 60 * h;
                tans += 60 * (23 - H);
                tans += 59 - M;
                tans ++;
            }
            else{ // equal
                if(M<m){
                    tans = m - M;
                }
                else if(M>m){
                    tans = (24 * 60) - (M - m);
                }
                else{
                    tans = 0;
                }
            }
            ans = min(tans,ans);
        }

        cout<<ans/60<<" "<<ans%60<<'\n';
    }

    return 0;
}