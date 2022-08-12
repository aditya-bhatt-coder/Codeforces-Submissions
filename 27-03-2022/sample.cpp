#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int l; cin>>l;
	string s; cin>>s;
	int nc=0,tc=0;
	for(int i=0 ; i<s.length() ; i++){
		if(s[i]=='N')
			nc++;
		else
			tc++;
	}
	if(tc>nc)
		cout<<"Tusla";
	else
		cout<<"Nutan";
	// Your code here
	return 0;
}