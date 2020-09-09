// https://practice.geeksforgeeks.org/problems/josephus-problem/1/?track=ppc-recursion&batchId=221

#include <bits/stdc++.h>
using namespace std;


int josephus(int n, int k);

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		cout<<josephus(n,k)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this method */
int josephus(int n, int k)
{
   //Your code here
    if(n==1)
        return 1;
    else
        return (josephus(n-1,k)+k-1)%n+1;
    
}
