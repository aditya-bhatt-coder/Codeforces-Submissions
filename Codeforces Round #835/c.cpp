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
        
        vector<int> v(n),ans(n);
        for(int &i : v) cin>>i;

        int m1 = INT_MIN;
        int m1i = -1;
        int m2 = INT_MIN;

        for(int i=0 ; i<n ; i++){
            if(m1 < v[i]){
                m1 = v[i];
                m1i = i;
            }
        }

        for(int i=0 ; i<n ; i++){
            if(i == m1i) continue;
            if(m2 < v[i]){
                m2 = v[i];
            }
        }

        for(int i=0 ; i<n ; i++){
            if(i == m1i){
                ans[i] = v[i] - m2;
            }
            else{
                ans[i] = v[i] - m1;
            }
        }

        print(ans);
    }

    return 0;
}