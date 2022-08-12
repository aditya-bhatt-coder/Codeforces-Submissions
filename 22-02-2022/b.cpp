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
        int n; cin>>n; vector<int> v;
        
            for(int i=n ; i>0 ; i--)
                v.push_back(i);
            for(int i : v)
                    cout<<i<<" ";
                cout<<'\n';
            for(int i=n-1 ; i>0 ; i--){
                swap(v[i],v[i-1]);
                for(int i : v)
                    cout<<i<<" ";
                cout<<'\n';
            }
    }

    return 0;
}