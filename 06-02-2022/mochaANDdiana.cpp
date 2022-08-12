#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

vector<int> p1,p2;
vector<int> s1,s2;

int find_p1(int a){
    if(a==p1[a])
        return a;
    //path compression
    return p1[a] = find_p1(p1[a]);
}

int find_p2(int a){
    if(a==p2[a])
        return a;
    //path compression
    return p2[a] = find_p2(p2[a]);
}

void union_p1(int a, int b){
    a = find_p1(a);
    b = find_p1(b);

    if(a!=b){
        if(s1[a]<s1[b])
            swap(a,b);
        p1[b] = a;
        s1[a]+=s1[b];
    }
}

void union_p2(int a, int b){
    a = find_p2(a);
    b = find_p2(b);

    if(a!=b){
        if(s2[a]<s2[b])
            swap(a,b);
        p2[b] = a;
        s2[a]+=s2[b];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

        //taking input
        int n,m1,m2;
        cin>>n>>m1>>m2;

        //initialization
        vector<vector<int>> ans;
        p1.resize(n+1);p2.resize(n+1);s1.resize(n+1,1);s2.resize(n+1,1);
        for(int i=0 ; i<=n ; i++){
            p1[i]=i;
            p2[i]=i;
        }

        //taking input
        int u,v;
        for(int i=0 ; i<m1 ; i++){
            // cout<<i<<'\n';
            cin>>u>>v;
            union_p1(u,v);
        }
        for(int i=0 ; i<m2 ; i++){
            // cout<<i<<'\n';
            cin>>u>>v;
            union_p2(u,v);
        }

        for(int i=1 ; i<=n ; i++)
            for(int j=1 ; j<=n ; j++)
                if(i!=j){
                    if(find_p1(i)!=find_p1(j)){
                        if(find_p2(i)!=find_p2(j)){
                            ans.push_back({i,j});
                            union_p1(i,j);
                            union_p2(i,j);
                        }
                    }
                }

        //printing Answer
        cout<<ans.size()<<'\n';
        for(int i=0 ; i<ans.size() ; i++)
            cout<<ans[i][0]<<" "<<ans[i][1]<<'\n';

    return 0;
}