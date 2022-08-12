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
        int n; cin>>n;
        
        if(n<=19){
            cout<<"YES\n";
            int a=1;
            for(int i=0 ; i<n ; i++){
                cout<<a<<" ";
                a *= 3;
            }
            cout<<'\n';
        }
        else
            cout<<"NO\n";
    }

    return 0;
}