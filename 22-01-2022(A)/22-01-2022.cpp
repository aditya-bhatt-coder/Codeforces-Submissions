#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){

        int n, k;
        cin>>n>>k;

        int a[n], b[n];
        vector< pair<int, int> > vpi;

        for(int i=0 ; i<n ; i++)
            cin>>a[i];
        for(int i=0 ; i<n ; i++){
            cin>>b[i];
            vpi.push_back({a[i],b[i]});
        }

        sort(vpi.begin(), vpi.end());

        for(int i=0 ; i<n ; i++){
            if(k>=vpi[i].first)
                k+=vpi[i].second;
            else
                break;
        }
        cout<<k<<'\n';
    }

    return 0;
}