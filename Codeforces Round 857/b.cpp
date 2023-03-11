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
        int n; cin >> n;
        vector<int> a(n);
        for(int &i : a)
            cin >> i;

        map<int, int> m;
        int ans = 0;
        int more = 0;

        int i = 0;
        while(i < n and a[i] == 2)i++;

        for( ; i<n ; i++){
            if(a[i] == 1){
                more++;
            }
            else{
                int occ = m[1] + (m[2]+1)/2;
                int free = ans - occ;
                int space = more - free;
                ans += max(0,space);
                // cout<<"occ : "<<occ<<'\n';
                // cout<<"free : "<<free<<'\n';
                // cout<<"space : "<<space<<'\n';
                // cout<<"ans : "<<ans<<"\n\n";
                if(m[1] != 1){
                    m[1]++;
                    more--;
                    m[2] += more;
                }else{
                    m[2] += more;
                }
                more = 0;
            }
        }

        if(more){
            int occ = m[1] + (m[2]+1)/2;
            int free = ans - occ;
            int space = more - free;
            ans += max(0,space);
            if(m[1] != 1){
                m[1]++;
                more--;
                m[2] += more;
            }else{
                m[2] += more;
            }
            more = 0;
        }

        cout<<ans<<'\n';
    }

    return 0;
}