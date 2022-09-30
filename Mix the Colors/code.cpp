#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int sum=0;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    map<int,int> m;
	    for(int i=0;i<n;i++){
	        m[a[i]]++;
	    }
	    for(auto i : m){
	        sum += i.second -1;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
