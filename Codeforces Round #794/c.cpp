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
        vector<int> a(n);
        for(int &i : a)
            cin>>i;
        if(n%2!=0){
            cout<<"NO\n";
            continue;
        }
        sort(a.begin(),a.end());
        int i=0, j=n/2;
        vector<int> ans;
        for(int it=0 ; it<n/2 ; it++,i++,j++){
            ans.push_back(a[i]);
            ans.push_back(a[j]);
        }
        // for(int x : ans)
        //     cout<<x<<" ";
        //     cout<<'\n';
        a = ans;
        int f = 0;
        for(int i = 0; i < n; ++i) {
            if (a[i] < a[(i + 1) % n] && a[i] < a[(!i ? n - 1 : i - 1)]) continue;
            else if (a[i] > a[(i + 1) % n] && a[i] > a[(!i ? n - 1 : i - 1)]) continue;
            else {
                f=1;
                break;
            }
        }
        if(f)
            cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(int x : ans)
                cout<<x<<" ";
            cout<<'\n';
        }
    }

    return 0;
}