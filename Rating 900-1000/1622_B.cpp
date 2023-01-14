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
        vector<vector<int>> o,z;
        for(int &x : a) cin>>x;

        string s;
        cin>>s;

        for(int i=0 ; i<n ; i++){
            if(s[i] == '1'){
                o.push_back({a[i],i});
            }
            else{
                z.push_back({a[i],i});
            }
        }

        sort(o.begin(),o.end());
        sort(z.begin(),z.end());

        int ind = 1;

        for(int i=0 ; i<z.size() ; i++){
            a[ z[i][1] ] = ind;
            ind++;
        }

        for(int i=0 ; i<o.size() ; i++){
            a[ o[i][1] ] = ind;
            ind++;
        }

        print(a);
    }

    return 0;
}