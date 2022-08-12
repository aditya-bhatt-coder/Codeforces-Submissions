#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

vector<vector<int>> ans;

void selection_sort(vector<int> &a, vector<int> &b, int n){
    for(int i=0 ; i<n-1 ; i++){
        int minInd = i;
        for(int j=i+1 ; j<n ; j++){
            if(a[minInd]>a[j])
                minInd = j;
        }
        if(i!=minInd){
            ans.push_back({i+1,minInd+1});
            swap(a[minInd],a[i]);
            swap(b[minInd],b[i]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        //taking input
        int n;
        cin>>n;
        ans.clear();
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0 ; i<n ; i++)
            cin>>a[i];
        for(int i=0 ; i<n ; i++)
            cin>>b[i];

        //applying selection sort on both arrays
        selection_sort(a,b,n);
        selection_sort(b,a,n);

        //printing ans
        if(is_sorted(a.begin(),a.end()) && is_sorted(b.begin(),b.end())){
            cout<<ans.size()<<'\n';
            for(auto pr : ans)
                cout<<pr[0]<<" "<<pr[1]<<'\n';
        } else{
            cout<<"-1\n";
        }
    }

    return 0;
}