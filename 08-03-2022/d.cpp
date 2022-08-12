#include <bits/stdc++.h>
#define ll long long
using namespace std;

void rotate(int v[], int n, int k){
    reverse(v,v+k);
    reverse(v+k,v+n);
    reverse(v,v+n);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n], ans[n];
        for(int i=0 ; i<n ; i++)    cin>>arr[i];

        for(int i=n-1 ; i>=0 ; i--){
            int j;
            for(j=0 ; j<i ; j++){
                if(arr[j]==i+1)
                    break;
            }
            if(j==i)    j=-1;
            ans[i] = j+1;
            rotate(arr, i+1, j+1);
        }
        for(int i=0 ; i<n ; i++)
            cout<<ans[i]<<" ";
        cout<<'\n';
    }

    return 0;
}