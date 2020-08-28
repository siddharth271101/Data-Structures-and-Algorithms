// https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1/?track=ppc-search-sort&batchId=221

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//arr1,arr2 : the arrays
// n, m: size of arrays
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector <int> v;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            if(v.size()==0 || v.back()!=arr1[i])
                v.push_back(arr1[i]);
            i++;
        }
        else
        {
            if(v.size()==0 || v.back()!=arr2[j])
                v.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n){
        if(v.size()==0 || v.back()!=arr1[i])
            v.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        if(v.size()==0 || v.back()!=arr2[j])
            v.push_back(arr2[j]);
        j++;
    }
    return v;
    
}

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    
	    vector<int> ans = findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends