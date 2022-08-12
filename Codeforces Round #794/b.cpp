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
        for(int &i : a)
            cin>>i;
        int ans=0;
        for(int i=0 ; i<n-1 ; i++){
            if(a[i]>a[i+1]){
                ans++;
                i++;
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}