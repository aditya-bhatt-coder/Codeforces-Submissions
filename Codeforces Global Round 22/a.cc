//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        int n; cin>>n;

        vector<int> type(n);
        vector<ll> x,y;

        for(int &i : type) cin>>i;

        for(int i=0 ; i<n ; i++){
            ll t; cin>>t;
            if(type[i]==0)
                x.push_back(t);
            else
                y.push_back(t);
        }

        sort(x.begin(),x.end());
        sort(y.begin(),y.end());

        ll ans = 0;

        if(x.size()==0){
            for(ll i : y)
                ans+=i;
        }
        else if(y.size()==0){
            for(ll i : x)
                ans+=i;
        }
        else if(x.size()==y.size()){
            for(ll i : x)
                ans+=2*i;
            for(ll i : y)
                ans+=2*i;
            ans -= min(x[0],y[0]);
        }
        else{
            reverse(x.begin(),x.end());
            reverse(y.begin(),y.end());
            int i=0;
            for(i=0 ; i<min(x.size(),y.size()) ; i++){
                ans += 2*x[i];
                ans += 2*y[i];
            }
            while(i<x.size())   ans+=x[i],i++;
            while(i<y.size())   ans+=y[i],i++;
        }

        cout<<ans<<'\n';
    }

    return 0;
}