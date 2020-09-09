// https://practice.geeksforgeeks.org/problems/sum-of-digits-of-a-number/1/?track=ppc-recursion&batchId=221

//Initial Template for C++



#include <iostream>
using namespace std;



 // } Driver Code Ends


//User function Template for C++
// Complete this function
int sumOfDigits(int n)
{
    //Your code here
    if(n==0)
        return 0;
    else
        return (n%10 + sumOfDigits(n/10));
    
}


// { Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    
	    cout<<sumOfDigits(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends