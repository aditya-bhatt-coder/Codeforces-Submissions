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
        int n; cin>>n;
        vector<int> v(n);
        multiset<int> s;
        int ans = 0;

        // cout<<"testing\n";

        for(int &i : v){
            cin>>i;
            s.insert(i);
        }

        while(s.size()){
            // cout<<s.size()<<'\n';
            int fe = *(s.begin());
            ans++;
            for(int i=fe ; ; i++){
                // cout<<"inside for loop\n";
                auto itr = s.find(i);
                if(itr != s.end()){
                    s.erase(itr);
                }
                else 
                    break;
            }
        }

        cout<<ans<<'\n';
    }

    return 0;
}