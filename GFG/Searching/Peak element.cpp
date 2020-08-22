// https://practice.geeksforgeeks.org/problems/peak-element/1

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
int peakElement(int arr[], int n)
{
   // Your code here
   int start = 0;
   int end = n-1;
   while(start<=end){
       if(arr[0]> arr[1]){
       return 0;
       break;
       }
       if(arr[n-1] > arr[n-2]){
       return n-1;
       break;
       }
       int mid = start + (end-start)/2;
       if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
       return mid;
       break;
       }
       if(arr[mid]<arr[mid-1])
       end = mid-1;
       else
       start = mid+1;
   }
   return -1;
}

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		bool f=0;
		int A = peakElement(a,n);
		
		if(n==1)
		f=1;
		else
		if(A==0 and a[0]>=a[1])
		f=1;
		else if(A==n-1 and a[n-1]>=a[n-2])
		f=1;
		else if(a[A] >=a[A+1] and a[A]>= a[A-1])
		f=1;
		else
		f=0;
		
		cout<<f<<endl;
		
	}

	return 0;
}  // } Driver Code Ends