// https://practice.geeksforgeeks.org/problems/fibonacci-using-recursion/1/?track=ppc-recursion&batchId=221

//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

//Complete this function
long long fibonacci(int n)
{
    //Your code here
if (n <= 2) {
return 1;
}
return fibonacci(n - 1) + fibonacci(n - 2);

}


// { Driver Code Starts.



int main() {
	int T;
	cin>>T;
	while (T--)
	{
	    int n;
	    cin>>n;
	    
	    cout<<fibonacci(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends