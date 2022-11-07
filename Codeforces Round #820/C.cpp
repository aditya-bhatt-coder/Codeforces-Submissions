// #include <bits/stdc++.h>
// using namespace std;
 
// typedef long long ll;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// typedef pair<string, string> pss;
// typedef vector<int> vi;
// typedef vector<vi> vvi;
// typedef vector<pii> vii;
// typedef vector<ll> vl;
// typedef vector<vl> vvl;
 
// double EPS = 1e-9;
// int INF = 1000000005;
// long long INFF = 1000000000000000005ll;
// double PI = acos(-1);
// int dirx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };
// int diry[8] = { 0, 1, -1, 0, -1, 1, -1, 1 };
 
// #ifdef TESTING
// #define DEBUG fprintf(stderr, "====TESTING====\n")
// #define VALUE(x) cerr << "The value of " << #x << " is " << x << endl
// #define debug(...) fprintf(stderr, __VA_ARGS__)
// #else
// #define DEBUG
// #define VALUE(x)
// #define debug(...)
// #endif
 
// #define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
// #define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
// #define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
// #define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
// #define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
// #define FOREACH(a, b) for (auto&(a) : (b))
// #define REP(i, n) FOR(i, 0, n)
// #define REPN(i, n) FORN(i, 1, n)
// #define MAX(a, b) a = max(a, b)
// #define MIN(a, b) a = min(a, b)
// #define SQR(x) ((ll)(x) * (x))
// #define RESET(a, b) memset(a, b, sizeof(a))
// #define fi first
// #define se second
// #define mp make_pair
// #define pb push_back
// #define ALL(v) v.begin(), v.end()
// #define ALLA(arr, sz) arr, arr + sz
// #define SIZE(v) (int)v.size()
// #define SORT(v) sort(ALL(v))
// #define REVERSE(v) reverse(ALL(v))
// #define SORTA(arr, sz) sort(ALLA(arr, sz))
// #define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
// #define PERMUTE next_permutation
// #define TC(t) while (t--)

// int id(char c){
//     return c-'a'+1;
// }

// void solve(){
//         //your code here
//         string t; cin>>t;
//         string s = t;
//         sort(t.begin(),t.end());
//         int n = s.size();
//         vector<int> ans;
//         vector<vector<int>> v(27);
//         for(int i=0 ; i<n ; i++){
//             v[id(s[i])].push_back(i+1);
//         }

//         int start = id(s[0]);
//         int end = id(s[n-1]);
//         ll cost = 0;

//         // cout<<start<<" "<<end<<'\n';

//         if(start>end){
//             for(int i=start ; i>=end ; i--){
//                 for(auto j : v[i])
//                     ans.push_back(j);
//             }
//         }
//         else{
//             for(int i=start ; i<=end ; i++){
//                 for(auto j : v[i])
//                     ans.push_back(j);
//             }
//         }

//         // for(auto i : ans)
//         //     cout<<i<<" ";
//         // cout<<'\n';

//         for(int i=0 ; i<ans.size()-1 ; i++){
//             // cout<<s[ans[i]]<<" "<<s[ans[i+1]]<<'\n';
//             cost += abs( id(s[ans[i]-1]) - id(s[ans[i+1]-1]) );
//         }
//         // cout<<"hi";

//         cout<<cost<<" "<<ans.size()<<'\n';
//         for(auto i : ans)
//             cout<<i<<" ";
//         cout<<'\n';

// }

// int main()
// {
//     int testcases;
//     cin>>testcases;
//     TC(testcases){
//         solve();
//     }

//     return 0;
// }

//IT'S NOT A BUG, IT'S AN UNDOCUMENTED FEATURE!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int id(char c){
    return c-'a'+1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        
        int n = s.size();
        vector<int> ans;
        vector<vector<int>> v(27);
        int st = id(s[0]);
        int e = id(s[n-1]);
        ll cost = 0;

        for(int i=0 ; i<n ; i++)
            v[id(s[i])].push_back(i+1);


        if(st>e){
            for(int i=st ; i>=e ; i--)
                for(auto idk : v[i])
                    ans.push_back(idk);
        }
        else{
            for(int i=st ; i<=e ; i++)
                for(auto lolo : v[i])
                    ans.push_back(lolo);
        }

        for(int i=0 ; i<ans.size()-1 ; i++)
            cost += abs( id(s[ans[i]-1]) - id(s[ans[i+1]-1]) );

        cout<<cost<<" "<<ans.size()<<'\n';
        for(auto i : ans)
            cout<<i<<" ";
        cout<<'\n';
    }

    return 0;
}