// https://practice.geeksforgeeks.org/problems/minimum-platforms/0

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int j=0;j<n;j++){
	        cin>>b[j];
	    }
	    sort(a,a+n);
	    sort(b,b+n);
	    int max_count = 1;
       for(int i=1;i<n;i++){
           int count = 1;
           for(int j=0;j<i;j++){
               if(b[j]>=a[i])
                    count++;
                max_count = max(count,max_count);   
           }
       }
       cout<<max_count<<endl;
	}
	return 0;
}