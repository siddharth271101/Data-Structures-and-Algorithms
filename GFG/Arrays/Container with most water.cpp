// https://practice.geeksforgeeks.org/viewSol.php?subId=757fc2f5c3d55ead5532c0498ef2270b&pid=3072&user=siddharth271101
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
	    int totalarea = INT_MIN;
	    for(int j=0;j<n;j++){
	        for(int k=0;k<n;k++){
	            int dist = abs(k-j);
	            int mini = min(a[j],a[k]);
	            int area = dist*mini;
	            if(area>totalarea){
	                totalarea = area;
	                
	            }
	        }
	    }
	    cout<<totalarea<<endl;
	}
	return 0;
}