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
        ll l,r,x,a,b;
        cin>>l>>r>>x>>a>>b;

        if(a==b){
            cout<<"0\n";
            continue;
        }

        ll d1 = abs(a-l);
        ll d2 = abs(r-a);
        ll d3 = abs(b-l);
        ll d4 = abs(r-b);


        if(abs(a-b) >= x){
            cout<<"1\n";
            continue;
        }

        if( (d1<x and d2<x) or (d3<x and d4<x)){
            cout<<"-1\n";
            continue;
        }

        if(d1 < x){
            if(d4 >= x){
                cout<<"2\n";
            }
            else{
                cout<<"3\n";
            }
        }
        else if(d2 < x){
            if(d3 >= x){
                cout<<"2\n";
            }
            else{
                cout<<"3\n";
            }
        }
        else{
            cout<<"2\n";
        }
    }

    return 0;
}