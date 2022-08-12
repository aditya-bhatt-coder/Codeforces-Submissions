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

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> m;
        int ans=0;
        for(int i=0 ; i<n ; i++)
            m[s[i]]++;
        for(auto it=m.begin() ; it!=m.end() ; it++)
            ans += it->second +1;
        cout<<ans<<'\n';
    }

    return 0;
}