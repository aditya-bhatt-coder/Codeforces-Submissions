#include <bits/stdc++.h>
#define ll long long
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
        int ans = 0;
        for(int i=0 ; i<n ; i++){
            int tmp; cin>>tmp;
            ans+=tmp-1;
        }
        if(ans%2==0)
            cout<<"maomao90\n";
        else
            cout<<"errorgorn\n";
    }

    return 0;
}