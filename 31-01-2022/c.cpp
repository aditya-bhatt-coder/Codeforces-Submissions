#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){

        ll hc, dc, hm, dm, k, w, a;
        cin>>hc>>dc;cin>>hm>>dm;cin>>k>>w>>a;
        bool flag=false;

        for(int i=0 ; i<=k ; i++){
            int nh = hc+(i*a);
            int nd = dc+((k-i)*w);
            int time_to_kill_monster, time_to_get_killed;

            if(hm%nd==0)    time_to_kill_monster = hm/nd;
            else    time_to_kill_monster = hm/nd +1;

            if(nh%dm==0)    time_to_get_killed = nh/dm;
            else    time_to_get_killed = nh/dm +1;

            if(time_to_kill_monster <= time_to_get_killed){
                flag=true;break;
            }
        }

        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }

    return 0;
}