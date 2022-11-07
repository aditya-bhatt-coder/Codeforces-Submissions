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

        string s = "";
        for(int i=0 ; i<n ; i++)
            s+="BAN";

        cout<<(n+1)/2<<'\n';

        int i=0, j=3*n-1;
        while(i<j){
            if(s[i] == 'A'){
                while(s[j] != 'N')j--;
                if(i>j)
                    break;
                swap(s[i],s[j]);
                cout<<i+1<<' '<<j+1<<'\n';
            }i++;
        }
    }

    return 0;
}