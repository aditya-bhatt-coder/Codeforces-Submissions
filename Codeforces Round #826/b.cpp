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

    int tc;
    cin>>tc;
    while(tc--){
        int n; cin>>n;
        if(n==3){
            cout<<"-1\n";
            continue;
        }
        
        if(n==5){
            cout<<"5 4 1 2 3\n";
            continue;
        }

        vector<int> v(n);
        for(int i=1 ; i<=n ; i++)
            v[i-1] = i;
        reverse(v.begin(),v.end());

        if(n%2==0){
            for(int i=0 ; i<v.size() ; i++)
                cout<<v[i]<<" ";
            cout<<"\n";
            continue;
        }

        swap(v[n/2],v[n/2-1]);
        for(int i=0 ; i<v.size() ; i++)
                cout<<v[i]<<" ";
            cout<<"\n";
        
    }

    return 0;
}