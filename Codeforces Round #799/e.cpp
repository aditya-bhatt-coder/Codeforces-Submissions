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

    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int asum = 0;
        vector<int> a(n);
        for(int &x : a){
            cin>>x;
            asum+=x;
        }
        if(asum<k){
            cout<<"-1\n";
            continue;
        }
        if(asum==k){
            cout<<"0\n";
            continue;
        }

        asum = 0;
        //i=right, j=left
        int i=0,j=0, min_num=INT_MAX;
        while(i<n){ 
            asum = asum + a[i];
            if (asum==k)
            min_num = min(min_num, ((n-(i+1))+j));
            else if(asum>k){
                while (asum > k) {
                    asum -= a[j];
                    j++;
                }
            }
            i++;
        }
        cout<<min_num<<'\n';
    }

    return 0;
}