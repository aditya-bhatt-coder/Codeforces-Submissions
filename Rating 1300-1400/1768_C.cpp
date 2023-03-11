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

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    unordered_map<int,int> m;
    int two = 0;

    for(int &i : a){
        cin >> i;
        m[i]++;
        if(m[i] >= 2)
            two++;
    }

    if(!(m[n] and two <= 1)){
        cout<<"NO\n";
        return;
    }

    set<int> pset, qset;
    vector<int> p(n), q(n);

    for(int i=0 ; i<n ; i++){
        if(pset.find(a[i]) == pset.end()){
            p[i] = a[i];
            pset.insert(a[i]);
        }
        else if(qset.find(a[i]) == qset.end()){
            q[i] = a[i];
            qset.insert(a[i]);
        }
        else{
            cout<<"NO\n";
            return;
        }
    }

    for(int i=0 ; i<n ; i++){
        if(p[i] == 0){
            int ctr = q[i];
            if(pset.find(ctr) == pset.end()){
                p[i] = ctr;
                pset.insert(ctr);
            }
            else if(ctr-1 > 0 and pset.find(ctr-1) == pset.end()){
                p[i] = ctr-1;
                pset.insert(ctr-1);
            }
            else if(ctr-2 > 0 and pset.find(ctr-2) == pset.end()){
                p[i] = ctr-2;
                pset.insert(ctr-2);
            }
            else{
                cout<<"NO\n";
                print(p);
                print(q);
                return;
            }
        }
        else{
            int ctr = p[i];
            if(qset.find(ctr) == qset.end()){
                q[i] = ctr;
                qset.insert(ctr);
            }
            else if(ctr-1 > 0 and qset.find(ctr-1) == qset.end()){
                q[i] = ctr-1;
                qset.insert(ctr-1);
            }
            else if(ctr-2 > 0 and qset.find(ctr-2) == qset.end()){
                q[i] = ctr-2;
                qset.insert(ctr-2);
            }
            else{
                cout<<"NO\n";
                // print(p);
                // print(q);
                return;
            }
        }
    }
    cout<<"YES\n";
    print(p);
    print(q);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}