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
        int n,a,b;
        cin>>n>>a>>b;

        int tbl = n - b;
        int tbr = a - 1;

        if(!(tbl < n/2 and tbr < n/2)){
            cout<<"-1\n";
            continue;
        }

        vector<int> v(n);
        set<int> s;

        v[0] = a; v[n-1] = b;
        s.insert(a); s.insert(b);

        for(int i=b, ind = 1 ; i<=n ; i++){
            tbl--;
            v[i] = n - tbl;
            s.insert(v[i]);
        }
        // print(v);

        // cout<<"tbr : "<<tbr<<'\n';
        for(int i=n-2 ; tbr>0 ; i--){
            v[i] = tbr;
            s.insert(v[i]);
            tbr--;
        }
        // print(v);

        for(int i=0 ; i<n ; i++){
            if(v[i] == 0){
                for(int j=1 ; j<=n ; j++){
                    if(s.find(j) == s.end()){
                        v[i] = j;
                        s.insert(j);
                        break;
                    }
                }
            }
        }

        print(v);

    }

    return 0;
}