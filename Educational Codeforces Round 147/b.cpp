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
        vector<int> a(n), b(n);

        for(int &i : a)
            cin >> i;

        for(int &i : b)
            cin >> i;

        int l = 0, r = n - 1;
        while(l < n and a[l] == b[l]) l++;
        while(r >= 0 and a[r] == b[r]) r--;
        while(l - 1 >= 0 and b[l - 1] <= b[l]) l--;
        while(r + 1 < n and b[r] <= b[r + 1]) r++;

        cout << l + 1 << " " << r + 1 << "\n";
    }

    return 0;
}