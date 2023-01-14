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
        int pair = n/2;

        vector<int> v(n);
        vector<vector<int>> ans;
        set<int> s;
        for(int &x : v){
            cin>>x;
            s.insert(x);
        }

        sort(v.begin(),v.end());

        for(int i=0 ; i<n-1 ; i++){
            for(int j=i+1 ; j<n ; j++){
                if(s.find(v[j]%v[i]) == s.end()){
                    ans.push_back({v[j],v[i]});
                    pair--;
                }
                if(!pair)
                    break;
            }
            if(!pair)
                break;
        }

        for(int i=0 ; i<ans.size() ; i++){
            print(ans[i]);
        }
    }

    return 0;
}