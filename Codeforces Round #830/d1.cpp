// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

//--debug--
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

    int q;
    cin>>q;

    set<ll> s;
    map<ll,ll> m;

    while(q--){
        char ch;
        ll x;
        cin>>ch>>x;

        if(ch == '+'){
            s.insert(x);
        }
        else{
            ll l = max(m[x],x);
            while(s.find(l) != s.end()) {l += x;}
            m[x] = l;
            cout << m[x] << '\n';
        }
    }

    return 0;
}