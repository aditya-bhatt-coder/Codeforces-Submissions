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

// void solve(){
//         //your code here
//         int n; cin>>n;
//         vector<int> v(n);

//         for(int i=1 ; i<=n; i++)
//             v[i-1] = i;

//         for(int i=n-3 ; i>0 ; i-=2)
//             swap(v[i],v[i-1]);

//         for(auto i : v)
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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        vector<ll> v(n);

        for(int i=1 ; i<=n; i++)
            v[i-1] = i;

        for(int i=n-3 ; i>0 ; i-=2)
            swap(v[i],v[i-1]);

        for(auto i : v)
            cout<<i<<" ";
        cout<<'\n';
    }

    return 0;
}