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
        int n; cin>>n;
        vector<int> a(n),b(n);
        for(int &x : a)
            cin>>x;
        for(int &x : b)
            cin>>x;

        int md=0;
        bool ans = true;
        for(int i=0 ; i<n ; i++)
            md = max(md,a[i]-b[i]);
        for(int i=0 ; i<n ; i++){
            if(a[i]-b[i]==md)
                continue;
            if(b[i]==0)
                continue;
            ans = false;
            break;
        }
        if(ans)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }

    return 0;
}