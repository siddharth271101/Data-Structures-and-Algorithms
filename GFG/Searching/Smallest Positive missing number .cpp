// https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number/0

#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a;
	    int k;
	    for(int i=0;i<n;i++){
	        cin>>k;
	        if(k>=1)
	        a.push_back(k);
	    }
	    n = a.size();
	    for(int i=0;i<n;i++){
	        while(a[i]>=1&&a[i]<=n&&a[i]!=a[a[i]-1]){
	            int temp = a[a[i]-1];
	            a[a[i]-1] = a[i];
	            a[i] = temp;
	        }
	    }
	    int flag = 0;
	    for(int i=0;i<n;i++){
	        if(i!=a[i]-1){
	        cout<<i+1<<endl;
	        flag=1;
	        break;
	        }
	    }
	    if(flag==0)
	    cout<<n+1<<endl;
	}
	return 0;
}