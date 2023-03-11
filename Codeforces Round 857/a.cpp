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

        vector<int> v(n);
        int pos = 0;
        int neg = 0;
        for(int &i : v){
            cin >> i;
            if(i > 0)
                pos++;
            else
                neg++;
        }

        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());

        int ctr = 0;
        for(int i=0 ; i<n ; i++){
            if(v[i] > 0){
                ctr++;
                cout<<ctr<<" ";
            }else{
                ctr--;
                cout<<ctr<<" ";
            }
        }
        cout<<'\n';

        ctr = 0;
        while(pos--){
            ctr++;
            cout<<ctr<<" ";
            if(neg-->0){
                ctr--;
                cout<<ctr<<" ";
            }
            // cout<<pos<<" "<<neg<<'\n';
        }
        cout<<'\n';
    }

    return 0;
}