#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n, ans=0; ll l, r, k;
        cin>>n>>l>>r>>k;
        vector<ll> p;

        for (int i=0 ; i<n ; i++){
            int t;cin>>t;
            if(t<=r && t>=l)
                p.push_back(t);
        }
        sort(p.begin(),p.end());
        
        for(int i=0 ; i<p.size() ; i++){
            if(k>=p[i]){
                k-=p[i];
                ans++;
            }
            else break;
        }
        cout<<ans<<'\n';
    }

    return 0;
}