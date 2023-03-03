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
        string a,b;
        cin>>a>>b;

        int n = a.size();
        int m = b.size();

        if(a[0] == b[0]){
            cout<<"YES\n";
            cout<<a[0]<<"*\n";
        }
        else if(a[a.size()-1] == b[b.size()-1]){
            cout<<"YES\n";
            cout<<"*"<<a[a.size()-1]<<"\n";
        }
        else{
            if(a.size() == 1 or b.size() == 1){
                cout<<"NO\n";
                continue;
            }
            bool ok = false;
            for(int i=0 ; i<m-1 ; i++){
                string str = a.substr(i,2);
                size_t found = b.find(str);
                if (found != string::npos){
                    ok = true;
                    cout<<"YES\n";
                    cout<<"*"<<str<<"*\n";
                    break;
                }
            }
            if(!ok){
                cout<<"NO\n";
            }
        }
    }

    return 0;
}