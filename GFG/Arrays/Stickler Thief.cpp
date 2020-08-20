// https://practice.geeksforgeeks.org/problems/stickler-theif/0

#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int dp[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    dp[0] = a[0];
	    dp[1] = max(a[0],a[1]);
	    for(int j=2;j<n;j++){
	        dp[j] = max(a[j] + dp[j-2],dp[j-1]);
	    }
	    cout<<dp[n-1]<<endl;;
	}
	return 0;
}