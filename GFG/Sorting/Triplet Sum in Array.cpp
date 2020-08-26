// https://practice.geeksforgeeks.org/problems/triplet-sum-in-array/0


#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,target;
	    cin>>n>>target;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int flag=0;
	    for(int i=0;i<n-2;i++)
	    {
	        int ptr1 = i+1,ptr2=n-1;
	        while(ptr1<ptr2){
	            int sum = a[i]+a[ptr1]+a[ptr2];
	            if(sum == target){
	            flag=1;
	            break;
	            }
	            if(sum<target)
	            ptr1++;
	            else
	            ptr2--;
	        }
	    }
	    cout<<flag<<endl;
	    
	}
	return 0;
}