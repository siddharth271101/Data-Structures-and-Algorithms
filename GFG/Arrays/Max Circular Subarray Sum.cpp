// https://practice.geeksforgeeks.org/problems/max-circular-subarray-sum/0


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
	    int maxi = a[0];
	    int mini = a[0];
	    int sum = a[0];
	    int cur_max = a[0];
	    int cur_min = a[0];
	    for(int i=1;i<n;i++){
	        sum = sum + a[i];
	        cur_max = max(cur_max+a[i],a[i]);
	        maxi = max(maxi,cur_max);
	        cur_min = min(cur_min+a[i],a[i]);
	        mini = min(cur_min,mini);
	    }
        if(sum==mini){
            cout<< maxi<<endl;
        }
        else{
        cout<<max(maxi,sum-mini)<<endl;
        }
	    
	}
	return 0;
}