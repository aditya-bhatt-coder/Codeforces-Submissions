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
        int n; cin>>n;
        vector<int> a(n);
        map<int,int> m;
        for(int &x : a){
            cin>>x;
            m[x]++;
        }
        int hatana = 0;
        for(auto it=m.begin() ; it!=m.end() ; it++){
            if(it->second>1)
                hatana += it->second-1;
        }
        if(hatana%2==0)
            cout<<n-hatana<<'\n';
        else
            cout<<n-hatana-1<<'\n';
        
    }

    return 0;
}