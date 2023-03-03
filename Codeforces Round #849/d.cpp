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
        string s; cin>>s;

        map<char,int> m1,m2;
        int ans = 2;

        for(int i=0 ; i<n ; i++)
            m2[s[i]]++;

        for(int i=0 ; i<n-1 ; i++){
            m1[s[i]]++;
            m2[s[i]]--;
            if(m2[s[i]] == 0)
                m2.erase(s[i]);
            ans = max(ans, int(m1.size()+m2.size()));
        }

        cout<<ans<<'\n';
    }

    return 0;
}