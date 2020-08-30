// https://practice.geeksforgeeks.org/problems/anagram-1587115620/1/?track=ppc-strings&batchId=221

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/*  Function to check if two strings are anagram
*   c, d: input string
*/
bool isAnagram(string c, string d){
    
    int count[256] = {0}; 
  
    if(c.length()!=d.length())
        return false;
        
    for (int i = 0; c[i] && d[i]; i++) { 
        count[c[i]]++; 
        count[d[i]]--; 
    } 
  
    for (int i = 0; i < 256; i++) 
        if (count[i]) 
            return false; 
    return true; 
    
}


// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;

        if(isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends