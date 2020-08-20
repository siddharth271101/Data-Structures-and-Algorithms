// https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int cmax = a[0];
	    int totalmax = a[0];
	    for(int j=1;j<n;j++){
	        cmax = max(a[j],cmax+a[j]);
	        totalmax = max(totalmax,cmax);
	    }

        cout<<totalmax<<endl;	    
	}
	return 0;
}