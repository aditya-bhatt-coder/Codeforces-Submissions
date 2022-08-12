#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    
    int n, ans=1; cin>>n;
    vector<int>v(n); bool dead = false;
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    
        if(i==0){
            if(v[i]==1)
                ans++;
        }
        
        else{
            if(v[i-1]==0 && v[i]==0)
                dead = true;
            if(v[i-1]==0 && v[i]==1)
                ans++;
            if(v[i-1]==1 && v[i]==1)
                ans+=5;
        }
        
    }
    
    if(dead)    cout<<"-1\n";
    else cout<<ans<<'\n';
    }

    return 0;
}