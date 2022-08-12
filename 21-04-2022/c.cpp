#include <bits/stdc++.h>
#define ll long long
using namespace std;

int chPar(vector<int> arr){
        for(int i=1 ; i<arr.size() ; i++){
            if(arr[0]%2!=arr[i]%2)
                return -1;
        }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n; cin>>n; vector<int> e,o;
        for(int i=0 ; i<n ; i++){
            int temp;cin>>temp;
            if(i%2==0)
                e.push_back(temp);
            else
                o.push_back(temp);
        }
        if(chPar(e)==1 && chPar(o)==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}