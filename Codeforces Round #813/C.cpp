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
        int n, ans=0; cin>>n;
        bool az=false;
        vector<int> a(n);
        vector<bool> z(n+1,false);
        map<int,int> m;
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
            m[a[i]]++;
        }
        if(a.size()==1){
            cout<<"0\n";
            continue;
        }
        int i = n-1;
        while(i>=0){
            if(i>0 and a[i-1]>a[i]){
                az=true;
                i--;
                break;
            }
            if(i>0 and a[i-1]==a[i]){
                i--;
                m[a[i]]--;
                continue;
            }
            if(m[a[i]]>1){
                az=true;
                break;
            }
            i--;
        }
        while(i>=0){
            if(z[a[i]]==false){
                z[a[i]]=true;
                ans++;
            }
            i--;
        }

        cout<<ans<<'\n';
    }

    return 0;
}