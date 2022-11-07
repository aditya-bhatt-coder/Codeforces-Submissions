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
        vector<int> a(n);
        for(auto &i : a) cin>>i;
        if(n==1){cout<<"0\n";continue;}
        int mx = *max_element(a.begin()+1,a.end());
        int mn = *min_element(a.begin(),a.end()-1);
        int t1 = max(mx-a[0],a[n-1]-mn);
        int t2=INT_MIN;
        for(int i=0 ; i<n ; i++)
            t2 = max(a[i]-a[(i+1)%n],t2);
        cout<<max(t1,t2)<<'\n';
    }

    return 0;
}