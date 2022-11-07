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
        vector<ll> s(26),t(26);
        bool alwaystrue = false;
        s[0] = t[0] = 1;

        for(int _=0 ; _<n ; _++){
            int d,k;
            string str;
            cin>>d>>k>>str;

            if(alwaystrue){
                cout<<"YES\n";
                continue;
            }

            if(d==1){
                for(auto i : str)
                    s[i-'a'] += k;
            }else{
                for(auto i : str){
                    t[i-'a'] += k;
                    if(i!='a')
                        alwaystrue = true;
                }
            }

            if(alwaystrue){
                cout<<"YES\n";
                continue;
            }

            bool only_a_in_s = true;

            for(int i=1 ; i<26 ; i++){
                if(s[i]>0){
                    only_a_in_s = false;
                }
            }

            if(only_a_in_s){
                if(s[0]<t[0]){
                    cout<<"YES\n";
                    continue;
                }else{
                    cout<<"NO\n";
                    continue;
                }
            }else{
                cout<<"NO\n";
                continue;
            }

        }
    }

    return 0;
}