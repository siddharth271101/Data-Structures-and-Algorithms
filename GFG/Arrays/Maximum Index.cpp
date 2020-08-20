// https://practice.geeksforgeeks.org/problems/maximum-index/0

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
	    int maxi = 0;
	    for(int i=0;i<n;i++){
	        for(int j=n-1;j>i;j--){
	            if(a[i]<=a[j]){
	            int diff = j-i;
	            maxi = max(diff,maxi);
	            break;
	            }
	        }
	    }
	    cout<<maxi<<endl;
	}
	return 0;
}