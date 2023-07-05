// GOD GIVES HIS TOUGHEST BATTLES TO HIS STRONGEST SOLDIERS !

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define input(v) for(auto &i : v) cin >> i
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define vvl vector<vl>
#define pb push_back
using namespace std;

// ---debug---
template <typename dt> void print(vector<dt> v){
    for(dt i = 0 ; i < v.size() ; i++)
        cout << v[i] << " ";
    cout << '\n';
}

bool rbs(string &s){
    stack<char> stk;

    for(int i=0 ; i<s.size() ; i++){
        if(stk.size()){
            if(stk.top() == '(' and s[i] == ')'){
                stk.pop();
            }else{
                stk.push(s[i]);
            }
        }
        else{
            stk.push(s[i]);
        }
    }

    return stk.size() == 0;
}

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int l = 0, r = 0;

    for(int i=0 ; i<n ; i++){
        if(s[i] == ')')
            r++;
        else
            l++;
    }

    if(n & 1 or l != r){
        cout << "-1\n";
        return;
    }

    string rev = s;
    reverse(rev.begin(), rev.end());

    if(rbs(s) or rbs(rev)){
        cout << "1\n";
        for(int i=0 ; i<n ; i++)
            cout << "1 ";
        cout << "\n";
        return;
    }

    stack<int> stk;
    vi ans(n, 2);

    for(int i=0 ; i<s.size() ; i++){
        char c = s[i];
        if(c == '('){
            stk.push(i);
        }
        else if(stk.size()){
            ans[stk.top()] = 1;
            ans[i] = 1;
            stk.pop();
        }
    }

    cout << "2\n";
    print(ans);
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