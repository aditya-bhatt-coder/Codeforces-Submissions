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
    int n; cin >> n;
    vector<int> ar(n);
    for(int i=0 ; i<n ; i++)
        cin >> ar[i];
    
    if(n%2!=0){
        cout << "Mike\n";
        continue;
    }

    int minmike = 2e9, minjoe = 2e9, minindmike = -1, minindjoe = -1;
    for (int i = 0; i < n; i += 2) {
        if (ar[i] < minmike) {
            minindmike = i;
            minmike = ar[i];
        }
    }
    for (int i = 1; i < n; i += 2) {
        if (ar[i] < minjoe) {
            minindjoe = i;
            minjoe = ar[i];
        }
    }
    if (minmike > minjoe) {
        cout << "Mike\n";
    }
    else if (minmike == minjoe) {
        if (minindmike > minindjoe) {
            cout << "Mike\n";
        }
        else cout << "Joe\n";
    }
    else cout << "Joe\n";
    }

    return 0;
}