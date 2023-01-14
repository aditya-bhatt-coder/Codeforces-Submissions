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
        int k, n;
        cin>>k>>n;

        set<int> s;

        int ctr = 1;
        for(int i=1 ; ctr<=n and k>0 ; ctr+=i, i++){
            s.insert(ctr);
            k--;
        }

        for(int i=n ; i>0 and k>0 ; i--){
            if(s.find(i) == s.end())
                s.insert(i), k--;
        }

        for(auto x : s)
            cout<<x<<" ";
        cout<<'\n';
    }

    return 0;
}