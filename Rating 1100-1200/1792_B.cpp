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
        int a1, a2, a3, a4;
        cin>>a1>>a2>>a3>>a4;
        
        if(a1==0){
            if(a2>0 || a3>0 || a4>0){
                cout<<"1\n";
            }else{
                cout<<"0\n";
            }
            continue;
        }
        
        int ans=a1;
        
        if(a2>a3){
            swap(a2, a3);
        }
        
        ans=ans+2*a2;
        
        a3=a3-a2;
        
        ans=ans+min(a1+1, a3+a4);
        
        cout<<ans<<"\n";
    }

    return 0;
}