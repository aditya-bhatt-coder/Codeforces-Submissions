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
        ll n; cin>>n;
        vector<ll> a(n);
        map<int,int> m;
        for(ll &x : a){
            cin>>x;
            m[x%10]++;
        }
        bool ans = false;
        for(int i=0 ; i<=9 ; i++)
            for(int j=0 ; j<=9 ; j++)
                for(int k=0 ; k<=9 ; k++)
                    if((i+j+k)%10==3)
                        if(m[i]>0){
                            m[i]--;
                            if(m[j]>0){
                                m[j]--;
                                if(m[k]>0){
                                    ans = true;
                                    break;
                                }m[j]++;
                            }m[i]++;
                        }
        if(ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}