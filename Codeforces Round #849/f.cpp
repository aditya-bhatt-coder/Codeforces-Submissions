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

int digitSum(int n){
    int sm = 0;
    while(n){
        sm += n%10;
        n /= 10;
    }
    return sm;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        int n; cin>>n;
        int q; cin>>q;

        vector<ll> v(n);
        set<int> st;

        for(int i=0 ; i<n ; i++){
            cin>>v[i];
            if(v[i] > 9)
                st.insert(i);
        }

        while(q--){
            int type;
            cin >> type;

            if(type == 1){
                int l, r;
                cin >> l >> r;
                l--; r--;
                while(st.size()){
                    auto lb = st.lower_bound(l);
                    if(lb == st.end() or *lb > r)
                        break;
                    int val = *lb;
                    v[*lb] = digitSum(v[*lb]);
                    if(v[*lb] < 10)
                        st.erase(lb);
                    l = val + 1;
                }

            }
            else{
                int idx; cin >> idx; idx--;
                cout<<v[idx]<<'\n';
            }
        }
    }

    return 0;
}