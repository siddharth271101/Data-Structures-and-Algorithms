// https://practice.geeksforgeeks.org/problems/lucky-numbers2911/1/?track=ppc-recursion&batchId=221

//Initial Template for C++


#include <bits/stdc++.h>
#define ll long long 
using namespace std;



 // } Driver Code Ends


//User-function template for C++

// Complete the function
// n: Input n
// counter: variable has already been declared in driver code and initialized as 2
// Return True if the given number is a lucky number else return False

bool isLucky(int n, int &counter) {
    // add code here
    if(counter>n)
        return true;
    if(n%counter==0)
        return false;
    n = n-n/counter;
    counter++;
    return isLucky(n,counter);
}

// { Driver Code Starts.

/*Driver function to test above function*/
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        int counter = 2;
        if(isLucky(n, counter))
            cout<<"1\n";
        else
            cout<<"0\n";
    }
    return 0;
}  // } Driver Code Ends