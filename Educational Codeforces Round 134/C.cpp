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
        int n; cin>>n;
        vector<ll> a(n), b(n), dmin(n), dmax(n);

        for(int i=0 ; i<n ; i++)
            cin>>a[i];

        for(int i=0 ; i<n ; i++)
            cin>>b[i];

        for (int i=0, j=0; i<n; i++) {
            while (b[j] < a[i]) {
                j++;
            }
            cout << b[j] - a[i] << " \n"[i == n - 1];
        }
    
        for (int i=0, j=0; i<n; i++) {
            j = max(j, i);
            while (j+1<n && a[j+1]<=b[j]) {
                j++;
            }
            cout << b[j] - a[i] << " \n"[i == n - 1];
        }
    }

    return 0;
}