// https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string2235/1/?track=ppc-strings&batchId=221
// https://www.youtube.com/watch?v=0CKUjDcUYYA
// O(N^2) solution

// Initial template for C++

#include <bits/stdc++.h>

using namespace std;

string longestPalindrome(string);

// Your code will be pasted here

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << longestPalindrome(str) << endl;
    }
    return 0;
}// } Driver Code Ends


// User function template for C++

// A : given string
// return the required string
string longestPalindrome(string S) {
    // code here
    int n = S.length();
    if(n==1)
        return S;
    int best_len = 0;
    string longest_substr;
    for(int mid = 0;mid<n;mid++){
        for(int x=0;mid-x>=0,mid+x<n;x++){
            if(S[mid-x]!=S[mid+x])
                break;
            int len = 2*x+1;
            if(len > best_len){
                best_len = len;
                longest_substr = S.substr(mid-x,len);
            }
        }
    }
    for(int mid = 0;mid<n-1;mid++){
        for(int x=1;mid-x+1>=0,mid+x<n;x++){
            if(S[mid-x+1]!=S[mid+x])
                break;
            int len = 2*x;
            if(len > best_len){
                best_len = len;
                longest_substr = S.substr(mid-x+1,len);
            }
        }
    }
    return longest_substr;
}