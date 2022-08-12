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
        for(int i=0 ; i<n ; i++)
            cin>>a[i];

        int m,rot=0,temp; cin>>m;
        for(int i=0 ; i<m ; i++){
            cin>>temp;
            rot = (rot+temp)%n;
        }

        cout<<a[rot]<<'\n';
        
    }

    return 0;
}