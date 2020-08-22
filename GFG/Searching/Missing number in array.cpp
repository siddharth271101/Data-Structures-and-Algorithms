// https://practice.geeksforgeeks.org/problems/missing-number-in-array/0


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
	    for(int i=0;i<n-1;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n-1);
	    int start = 0;
	    int end = n-2;
	    while(start<=end){
	        int mid = start + (end-start)/2;
	        if(a[0]!=1){
	        cout<<1<<endl;
	        break;
	        }
	        if(a[n-2]!=n){
	        cout<<n<<endl;
	        break;
	        }
	        if(a[mid]!=mid+1 && a[mid-1]==mid){
	        cout<<mid+1<<endl;
	        break;
	        }
	        if(a[mid]==mid+1)
	        start = mid + 1;
	        else
	        end = mid - 1;
	    }
	}
	return 0;
}