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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int q = 0; q < n; q++) {
            cin >> a[q];
        }
        set<int> s;
        for (int q : a) {
            s.insert(q);
        }
        cout << (s.size() == 2 ? n/2+1: n) << endl;
    }

    return 0;
}