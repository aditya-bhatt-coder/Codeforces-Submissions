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
        int n; char c;
        cin>>n>>c;

        string s; cin>>s;

        bool ok = true;

        for(int i=0 ; i<n ; i++){
            if(c != s[i]){
                ok = false;
                break;
            }
        }
        
        if(ok){
            cout<<0<<'\n';
            continue;
        }

        for(int i=1 ; i<=n ; i++){
            ok = true;
            for(int j=i ; j<=n ; j+=i){
                if(s[j-1] != c){
                    ok = false;
                    break;
                }
            }
            if(ok){
                cout<<"1\n"<<i<<'\n';
                break;
            }
        }

        if(!ok){
            cout<<"2\n"<<n-1<<" "<<n<<'\n';
            continue;
        }
    }

    return 0;
}