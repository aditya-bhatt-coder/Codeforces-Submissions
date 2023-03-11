// I CAN FIX THE WORLD, BUT THEY WON'T GIVE ME THE SOURCE CODE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// --debug--
template <typename dt> void print(vector<dt> v){
    for(dt i=0 ; i<v.size() ; i++)
        cout<<v[i]<<" ";
    cout<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        int n, m;
        cin >> n >> m;

        vector<int> ans(n+1, -1);
        deque<int> q;
        unordered_map<int, int> mp;

        for(int i=1 ; i<=n ; i++){
            q.push_back(i);
            mp[i]++;
        }
        for(int i=1 ; i<=m ; i++){
            int qry; cin >> qry;
            
            // new element
            if(mp[qry] == 0){
                q.push_front(qry);
                mp[qry]++;
                while(q.size()){
                    int poped_itm = q.back();
                    int freq = mp[poped_itm];
                    q.pop_back();
                    if(freq == 1){
                        mp.erase(poped_itm);
                        if(poped_itm <= n and ans[poped_itm] == -1){
                            ans[poped_itm] = i;
                        }
                        break;
                    }
                    else{
                        mp[poped_itm]--;
                    }
                }
            }
            // element already present
            else{
                // cout<<i<<" "<<qry<<'\n';
                q.push_front(qry);
                mp[qry]++;
            }
        }

        for(int i=1 ; i<=n ; i++){
            cout<<ans[i]<<' ';
        }
        cout<<'\n';

    }

    return 0;
}