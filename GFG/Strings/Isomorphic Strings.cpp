// https://practice.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1/?track=ppc-strings&batchId=221

// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

bool areIsomorphic(string, string);

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        cout<<areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}// } Driver Code Ends


// This function returns true if str1 and str2 are isomorphic
// else returns false
#include <bits/stdc++.h>
bool areIsomorphic(string str1, string str2)
{
    
    // Your code here
    if(str1.length() != str2.length())
        return false;
    unordered_map <char,char> m;
    unordered_set <char> s;
    for(int i=0;i<str1.length();i++){
        if(m.find(str1[i])==m.end() && s.find(str2[i])==s.end()){
            m[str1[i]] = str2[i];
            s.insert(str2[i]);
        }
        else{
            if(!(m.find(str1[i])!=m.end() && s.find(str2[i])!=s.end()))
                return false;
        }

    }
    return true;
    
}