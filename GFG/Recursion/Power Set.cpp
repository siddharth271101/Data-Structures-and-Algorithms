// https://practice.geeksforgeeks.org/problems/power-set-using-recursion/1/?track=ppc-recursion&batchId=221

//Initial Template for C++


// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++
void find(vector<string> &v,string str,int index=0,string curr ="")
{
    if(index==str.length())
    {
        v.push_back(curr);
        return;
    }
    else{
        find(v,str,index+1,curr + str[index]);
        find(v,str,index+1,curr);
    }
}

//Complete this function
vector <string> powerSet(string s)
{
   vector <string> v;
   //Your code here
   find(v,s);
   sort(v.begin(),v.end());
   return v;
}


// { Driver Code Starts.


// Driver code
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        vector<string> ans = powerSet(s);
        sort(ans.begin(),ans.end());
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
        
        
    }

return 0;
}   // } Driver Code Ends