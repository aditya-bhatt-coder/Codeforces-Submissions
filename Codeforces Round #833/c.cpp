// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// --debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=0 ; i<v.size() ; i++)
        cout<<v[i].first<<" "<<v[i].second;
    cout<<'\n';
}

vector< pair<ll, ll> > findSubArrays(vector<ll> &arr){
    int n = arr.size();
    unordered_map<ll, vector<ll> > map;
  
    vector <pair<ll, ll>> out;
    // ll out = 0;
  
    ll sum = 0;
  
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
  
        if (sum == 0)
            out.push_back(make_pair(0, i));
  
        if (map.find(sum) != map.end()){
            // map[sum] stores starting index of all subarrays
            vector<ll> vc = map[sum];
            for (auto it = vc.begin(); it != vc.end(); it++)
                out.push_back(make_pair(*it + 1, i));
        }
  
        // Important - no else
        map[sum].push_back(i);
    }
    return out;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        int n,t; cin>>n;

        int z = 0;
        vector<ll> a;
        for(int i=0 ; i<n ; i++){
            cin>>t;
            if(t == 0)
                z++;
            else
                a.push_back(t);
        }

        if(a.size() == 0){
            cout<<z<<'\n';
            continue;
        }

        vector< pair<ll, ll> > vp = findSubArrays(a);
        ll sz = vp.size();

        // cout<<"sz : "<<sz<<'\n';
        // cout<<"z : "<<z<<'\n';

        if(z == 0){
            cout<<sz<<'\n';
            continue;
        }
        else{
            ll sum = 0;
            for(int i=0 ; i<n ; i++){
                sum += a[i];
            }

            if(sum == 0){
                cout<<sz + (z/2) <<'\n';
            }
            else{
                z--;
                cout<<sz + (z/2) + 2 <<'\n';
            }
        }

        // for(auto i=0 ; i<sz.size() ; i++)
        //     cout<<sz[i].first<<" "<<sz[i].second<<'\n';
        // cout<<'\n';
        
    }

    return 0;
}