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
        int m,s; cin>>m>>s;

        vector<int> b(m);
        set<int> st;
        for(int i=0 ; i<m ; i++){
            cin>>b[i];
            st.insert(b[i]);
        }

        bool ans = true;

        for(int i=1 ; s > 0 ; i++){
            if(st.find(i) == st.end()){
                st.insert(i);
                s -= i;
                // cout<<s<<'\n';
            }
        }

        if(s != 0){
            cout<<"NO\n";
            continue;
        }

        for(int i=0 ; i<st.size() ; i++){
            if(st.find(i+1) == st.end()){
                ans = false;
            }
        }

        ans ? cout<<"YES\n" : cout<<"NO\n";
    }

    return 0;
}