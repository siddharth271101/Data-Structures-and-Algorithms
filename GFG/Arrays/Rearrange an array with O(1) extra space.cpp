// https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space/0

#include <iostream>
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
	    for(int i=0;i<n;i++){
	        cout<<a[a[i]]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}