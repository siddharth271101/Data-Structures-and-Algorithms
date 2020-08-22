// https://practice.geeksforgeeks.org/problems/median-of-two-sorted-arrays1618/1

//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int findMedian(int *, int , int *, int);

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int arr[n];
	    int brr[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> brr[i];
	    }
	    
	    if(n < m)
	        cout << findMedian(arr, n, brr, m) << endl;
	   else
	        cout << findMedian(brr, m, arr, n) << endl;
	    
	}

}// } Driver Code Ends


//User function template for C++

// arr : given array with size n 
// brr : given array with size m
int findMedian(int arr[], int n, int brr[], int m){
    // code here

if(n>m)
    return findMedian(brr,m,arr,n);

 int start = 0;
 int end = n;
 int partition_n,partition_m;
 while(start<=end){
     partition_n = start + (end-start)/2;
     partition_m = (n+m+1)/2 - partition_n;
     
     long maxleft_n = (partition_n == 0 ? INT_MIN : arr[partition_n-1]);
     long minright_n = (partition_n == n ? INT_MAX : arr[partition_n]);
     
     long maxleft_m = (partition_m == 0 ? INT_MIN : brr[partition_m-1]);
     long minright_m = (partition_m == m ? INT_MAX : brr[partition_m]);
     
     if(maxleft_n <= minright_m && maxleft_m <= minright_n){
         if((n+m)%2==0){
             return ((double)max(maxleft_n,maxleft_m) + min(minright_n,minright_m))/2;
         }
         else{
             return (double)max(maxleft_n,maxleft_m);
         }
     }
     else{
         if(maxleft_n > minright_m)
            end = partition_n - 1;
          else
            start = partition_n+1;
     }
 }
//  return -1.0;
}