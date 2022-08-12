#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        map<long long,long long> m;
        vector<long long> a(n+1);
        for(int i=1 ; i<n+1 ; i++){
            cin>>a[i];
            m[a[i]]++;
        }
        
        vector<long long> ans(n+1);
        int saved = 1;
        bool f=true;
        for(int i=1 ; i<n+1 ; i++){
            long long freq = m[a[i]];
            if(freq==1){
                f=false;
                break;
            }
            if(i==n or a[i]!=a[i+1]){
                ans[i]=saved;
                saved = i<n ? i+1 : 0;
            }
            else if(a[i]==a[i+1])
                ans[i] = i+1;
        }
        
        if(f){
            for(int i=1 ; i<n+1 ; i++){
                cout<<ans[i]<<" ";
            }cout<<endl;
        }
        else
            cout<<"-1\n";
    }
 
    return 0;
}