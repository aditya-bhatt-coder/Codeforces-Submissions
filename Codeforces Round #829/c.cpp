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
        int n; cin>>n;
        vector<int> a(n);
        for(int &x : a) cin>>x;

        if(n%2 != 0)
        {
            cout<<"-1\n";
            continue;
        }

        vector<vector<int>> v;

        for(int i=0 ; i<n ; i+=2)
        {
            if(a[i]*a[i+1] == 1)
            {
                v.push_back({i+1,i+2});
            }
            else
            {
                v.push_back({i+1,i+1});
                v.push_back({i+2,i+2});
            }
        }

        cout<<v.size()<<'\n';
        for(int i=0 ; i<v.size() ; i++)
        {
            cout<<v[i][0]<<" "<<v[i][1]<<'\n';
        }

    }

    return 0;
}