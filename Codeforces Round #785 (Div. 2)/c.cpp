#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll table[40004];
vector<ll> v;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for(int i=0 ; i<40004 ; i++){
        string s = to_string(i);
        string a = s;
        reverse(s.begin(),s.end());
        if(a==s)
            v.push_back(i);
    }
    table[0]=1;
    for(int i=0 ; i<v.size() ; i++){
        for(int j=v[i] ; j<40004; j++){
            table[j] = table[j-v[i]];
            table[j] %= mod;
        }
    }
    int t;
    cin>>t;
    while(t--){
        ll n; cin>>n;
        cout<<table[n]<<'\n';
    }

    return 0;
}