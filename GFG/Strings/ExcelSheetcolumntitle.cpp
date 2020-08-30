// https://practice.geeksforgeeks.org/problems/excel-sheet5448/1/?track=ppc-strings&batchId=221

//Initial template for C++


#include<bits/stdc++.h>
using namespace std;
string ExcelColumn(int n);


 // } Driver Code Ends


//User function template for C++

string ExcelColumn(int n)
{
    // Your code goes here
    string res = {'\0'};
    while(n){
        n--;
        res = char('A'+(n%26))+res;
        n = n/26;
    }
 return res;   
}

// { Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ExcelColumn(n)<<endl;
    }
    return 0;
}
      // } Driver Code Ends