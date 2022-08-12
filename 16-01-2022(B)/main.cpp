#include <bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){

        string x;
        cin>>x;

        stringstream ss;
        vector<int> v;

        for(int i=0 ; i<x.length()-1 ; i++){
            int a, b, c;
            string cpy = x;

            ss<<cpy[i];
            ss>>a;
            ss<<cpy[i+1];
            ss>>b;
            int temp = ( a + b );

            cpy.erase(i,2);
            cpy.insert(i,to_string(temp));

            ss<<cpy;
            ss>>c;
            //temp = stoi(cpy);
            v.push_back(c);
        }

        //sort(v.begin(), v.end());

        for(int i = 0 ; i<v.size() ; i++)   cout<<v[i]<<" ";
        cout<<v[v.size()-1]<<endl;


    }

    return 0;
}
