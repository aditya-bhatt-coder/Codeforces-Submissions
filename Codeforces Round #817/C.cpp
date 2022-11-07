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
        int n;cin>>n;
        int a=0,b=0,c=0;
        set<string> s1;
        set<string> s2;
        set<string> s3;
        set<string> all;
        for(int i=0 ; i<n ; i++){
            string t;cin>>t;
            s1.insert(t);
            all.insert(t);
        }
        for(int i=0 ; i<n ; i++){
            string t;cin>>t;
            s2.insert(t);
            all.insert(t);
        }
        for(int i=0 ; i<n ; i++){
            string t;cin>>t;
            s3.insert(t);
            all.insert(t);
        }

        // for(string itm : all)
        //     cout<<itm<<'\n';

        for(string itm : all){
            int at=0,bt=0,ct=0;
            if(s1.find(itm)!=s1.end())
                at++;
            if(s2.find(itm)!=s2.end())
                bt++;
            if(s3.find(itm)!=s3.end())
                ct++;

            if(at+bt+ct==3){
                // cout<<"Hi3\n";
                continue;
            }
            if(at+bt+ct==2){
                // cout<<"Hi2\n";
                if(at==1)
                a++;
                if(bt==1)
                b++;
                if(ct==1)
                c++;
            }
            if(at+bt+ct==1){
                // cout<<"Hi1\n";
                if(at==1)
                a+=3;
                if(bt==1)
                b+=3;
                if(ct==1)
                c+=3;
            }
        }

        cout<<a<<" "<<b<<" "<<c<<'\n';
    }

    return 0;
}