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
        int w,h,t; cin>>w>>h;

        vector<int> a,b,c,d;
        
        cin>>t;
        for(int i=0 ; i<t ; i++){
            int t1;
            cin>>t1;
            a.push_back(t1);
        }

        cin>>t;
        for(int i=0 ; i<t ; i++){
            int t1;
            cin>>t1;
            b.push_back(t1);
        }

        cin>>t;
        for(int i=0 ; i<t ; i++){
            int t1;
            cin>>t1;
            c.push_back(t1);
        }

        cin>>t;
        for(int i=0 ; i<t ; i++){
            int t1;
            cin>>t1;
            d.push_back(t1);
        }

        cout<<max({1ll*h*(a[a.size()-1] - a[0]),
                    1ll*h*(b[b.size()-1] - b[0]),
                    1ll*w*(c[c.size()-1] - c[0]),
                    1ll*w*(d[d.size()-1] - d[0])})
                    <<'\n';
    }

    return 0;
}