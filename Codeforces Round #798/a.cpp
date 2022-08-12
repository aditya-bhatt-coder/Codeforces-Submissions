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
        int n,m,k;
        cin>>n>>m>>k;
        string a,b,c;
        cin>>a>>b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int pa=0,pb=0,ca=0,cb=0;
        while(pa<n && pb<m){
            if(a[pa]<b[pb]){
                if(ca<k){
                    c+=a[pa++];
                    ca++;
                    cb=0;
                } else{
                    c+=b[pb++];
                    cb++;
                    ca=0;
                }
            }
            else if(a[pa]>b[pb]){
                if(cb<k){
                    c+=b[pb++];
                    cb++;
                    ca=0;
                } else{
                    c+=a[pa++];
                    ca++;
                    cb=0;
                }
            }
            else{
                if(pa>pb){
                    if(ca<k){
                        c+=a[pa++];
                        ca++;
                        cb=0;
                    } else{
                        c+=b[pb++];
                        cb++;
                        ca=0;
                    }
                } else{
                    if(cb<k){
                        c+=b[pb++];
                        cb++;
                        ca=0;
                    } else{
                        c+=a[pa++];
                        ca++;
                        cb=0;
                    }
                }
            }
        }
        cout<<c<<'\n';
    }

    return 0;
}