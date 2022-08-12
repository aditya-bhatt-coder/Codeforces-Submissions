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
        int n,k;cin>>n>>k;
        map<int,int> m;
        int temp;
        for(int i=0 ; i<n ; i++){
            cin>>temp;
            m[temp]++;
        }
        vector<int> a;
        for(auto it=m.begin() ; it!=m.end() ; it++)
            if(m[it->first]>=k)
                a.push_back(it->first);
        
        if(a.size()==0){
            cout<<-1<<'\n';
            continue;
        }

        int mdiff = 0, l = a[0], r = a[0], tl = a[0], tr = a[0];

        for(int i=1 ; i<a.size() ; i++){
            if(a[i]==a[i-1]+1)
                tr = a[i];
            else{
                if(tr-tl > mdiff){
                    l = tl;
                    r = tr;
                    mdiff = tr-tl;
                }
                tl = a[i];
                tr = a[i];
            }
        }
        if(tr-tl > mdiff){
            l = tl;
            r = tr;
        }

        cout<<l<<" "<<r<<'\n';

    }

    return 0;
}