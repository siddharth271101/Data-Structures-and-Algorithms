// https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array/0

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
	    int target;
	    cin>>target;
	    int start=0;
	    int end = n-1;
	    int mid;
	    while(start<=end){
	         mid = start + (end-start)/2;
	        if(a[mid] == target){
	        break;
	        }
	        if(a[mid]>=a[start]){
	            if(target>=a[start] && target<=a[mid])
	            end = mid-1;
	            else
	            start = mid+1;
	        }
	        else{
	            if(target<=a[end] && target >=a[mid])
	            start = mid + 1;
	            else
	            end = mid-1;
	        }
	    }
	    if(start<=end)
	    cout<<mid<<endl;
	    else
	    cout<<-1<<endl;
	}
	return 0;
}