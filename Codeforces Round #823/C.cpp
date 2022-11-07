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
        string s; cin>>s;
        int n = s.size();
        vector<int> v(n);

        for(int i=0 ; i<n ; i++){
            v[i] = s[i]-'0';
        }

        vector<int> st;
        vector<int> buff;
        for(int i=0 ; i<n ; i++){
            while(st.size()!=0 and st[st.size()-1]>v[i]){
                buff.push_back(min(st[st.size()-1]+1,9));
                st.pop_back();
            }
            st.push_back(v[i]);
        }

        for(int i=0 ; i<st.size() ; i++){
            // cout<<st[i]<<" ";
            buff.push_back(st[i]);
        }

        sort(buff.begin(),buff.end());
        
        for(int i : buff)
            cout<<i;
        cout<<'\n';
    }

    return 0;
}