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
        int n; char c;string s;
        cin>>n>>c>>s;

        if (c == 'g'){
            cout<<"0\n";
            continue;
        }

        vector<int> vc, vg;

        for(int i=0 ; i<n ; i++){
            if(c == s[i])
                vc.push_back(i);
            if(s[i] == 'g')
                vg.push_back(i);
        }

        int ans = 0;

        for(int i=0 ; i<vc.size() ; i++){
            auto ub = upper_bound(vg.begin(),vg.end(),vc[i]);
            if(ub != vg.end()){
                ans = max(ans,*ub-vc[i]);
            }
            else{
                ans = max(ans, n-vc[i]+vg[0]);
            }
        }

        cout<<ans<<'\n';

    }

    return 0;
}