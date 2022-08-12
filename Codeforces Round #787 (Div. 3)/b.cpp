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
        int N; cin>>N;
        vector<int> a(N);
        int ans = 0;
        for(int i=0 ; i<N ; i++)
            cin>>a[i];

        for(int i=N-2 ; i>=0 ; i--){
            if(a[i]<a[i+1])
                continue;
            if(a[i+1]==0){
                ans = -1;
                break;
            }
            a[i] /= 2;
            ans++;i++;
        }
        cout<<ans<<'\n';
    }

    return 0;
}