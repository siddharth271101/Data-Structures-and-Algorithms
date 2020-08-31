// https://practice.geeksforgeeks.org/problems/longest-substring-without-repeating-characters/1/?track=ppc-strings&batchId=221

//Initial Template for C++
// sliding window
#include <bits/stdc++.h>
using namespace std;

int SubsequenceLength(string s);


 // } Driver Code Ends


//User function Template for C++

// s is the given string
int SubsequenceLength (string s) 
{
    // Your code goes here
    if(s.length()==0)
        return 0;
    int i=0,j=0;
    vector <int> cnt(256,0);
    int ans=0;
    while(j<s.length()){
        if(cnt[s[j]]==0){
            cnt[s[j]]++;
            j++;
            ans = max(ans,j-i);
            // cout<<ans<<endl;
        }
        else{
            cnt[s[i]]--;
            i++;
        }
    }
    return ans;
    
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    cin>>ws;
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<SubsequenceLength(str)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends