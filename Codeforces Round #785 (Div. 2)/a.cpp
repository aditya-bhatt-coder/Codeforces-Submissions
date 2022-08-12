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
        string s; cin>>s;
        int n = s.length();

        if(n==1)
            cout<<"Bob "<<int(s[0])-96<<'\n';
        else if(n%2==0){
            ll sum=0;
            for(char x : s)
                sum+=int(x)-96;
            cout<<"Alice "<<sum<<'\n';
        }
        else{
            ll sum=0;
            if(s[0]>s[n-1]){
                for(int i=0 ; i<n-1 ; i++)
                    sum+=int(s[i])-96;
                cout<<"Alice "<<sum-(int(s[n-1])-96)<<'\n';
            } else{
                for(int i=1 ; i<n ; i++)
                    sum+=int(s[i])-96;
                cout<<"Alice "<<sum-(int(s[0])-96)<<'\n';
            }
        }
    }

    return 0;
}