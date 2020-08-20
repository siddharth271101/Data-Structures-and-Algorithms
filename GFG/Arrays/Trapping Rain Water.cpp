// https://practice.geeksforgeeks.org/problems/trapping-rain-water/0

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
	    int largest = a[n-1];
	    int largest_r[n];
	    for(int j = n-1;j>=0;j--){
	        if(largest<a[j])
	        largest = a[j];
	    largest_r[j] = largest;
	    }
	    largest = a[0];
	    int largest_l[n];
	    for(int k=0;k<n;k++){
	        if(largest<a[k])
	        largest = a[k];
	    largest_l[k] = largest;      
	    }
	    int sum = 0;
	    for(int i=0;i<n;i++){
	        int Min = min(largest_l[i],largest_r[i]);
	        if(Min>a[i])
	        sum = sum + Min - a[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}