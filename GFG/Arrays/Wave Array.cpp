// https://practice.geeksforgeeks.org/problems/wave-array/0


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
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int j=0;j<n-1;j=j+2){
	        swap(a[j],a[j+1]);
	    }
	    for(int k=0;k<n;k++){
	        cout<<a[k]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}