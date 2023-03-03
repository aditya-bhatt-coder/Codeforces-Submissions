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
        int n, s, r;
        cin >> n >> s >> r;

        vector<int> a(n);

        a[n-1] = s - r;
        s -= a[n-1];

        while(s > 0){
            for(int i=0 ; i<n-1 and s>0 ; i++){
                a[i]++;
                s--;
            }
        }

        print(a);
    }

    return 0;
}