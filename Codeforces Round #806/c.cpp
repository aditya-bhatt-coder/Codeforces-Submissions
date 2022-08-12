//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n, m; cin>>n;
        vector<int> v(n);
        for(int &x : v)
            cin>>x;
        for(int i=0 ; i<n ; i++){
            cin>>m;
            string s;
            cin>>s;
            int u=0,d=0;
            for(int j=0 ; j<m ; j++){
                if(s[j]=='U')
                d++;
                else
                u++;
            }
            // cout<<s<<"    ";
            if(d==u)
                cout<<v[i]<<" ";
            else if(d<u){
                m = u-d;
                m %= 10;
                cout<<(v[i]+m)%10<<" ";
            }
            else{
                m = d-u;
                m %= 10;
                for(int k=0 ; k<m ; k++){
                    if(v[i]==0)
                        v[i]=9;
                    else
                        v[i]--;
                }
                cout<<v[i]<<" ";
            }
        }
        cout<<'\n';
    }

    return 0;
}