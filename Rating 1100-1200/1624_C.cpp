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
        int n,t; cin>>n;

        priority_queue<int> pq;
        for(int i=0 ; i<n ; i++){
            cin>>t;
            pq.push(t);
        }

        while(pq.top() > n){
            int t = pq.top();
            pq.pop();
            t /= 2;
            pq.push(t);
        }

        bool ok = true;
        for(int i=n ; i>0 ; i--){
            if(pq.top() != i){
                while(pq.top() > i){
                    int t = pq.top();
                    pq.pop();
                    t /= 2;
                    pq.push(t);
                }
                if(pq.top() != i){
                    ok = false;
                    break;
                }
                else{
                    pq.pop();
                }
            }
            else{
                pq.pop();
            }
        }

        ok ? cout<<"YES\n" : cout<<"NO\n";
    }

    return 0;
}