// https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array/0

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    long long int n,target;
	    cin>>n>>target;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int start = 0;
	    int end = n-1;

	    while(start<=end){
	        
	       if(target<=a[0]){
	            cout<<-1<<endl;
	            break;
	           }
	    
	        int mid = start + (end-start)/2;
	       // if(a[mid] == target){
	       // cout<<mid<<endl;
	       // break;
	       // }
	       if(target>a[n-1]){
	       cout<<n-1<<endl;
	       break;
	        }
	        if(a[mid]<=target && a[mid+1]>target){
	        cout<<mid<<endl;
	        break;
	        }
	        if(a[mid]>=target)
	        end = mid-1;
	        else
	        start = mid+1;
	    }
	   // if(start>end)
	   // cout<<-1<<endl;
	}
	return 0;
}
