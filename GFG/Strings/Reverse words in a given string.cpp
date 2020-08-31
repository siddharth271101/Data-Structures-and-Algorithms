// https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1/?track=ppc-strings&batchId=221

#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s);
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        cout<<reverseWords(s)<<endl;
    }
}// } Driver Code Ends



string reverseWords(string s) 
{ 
    // code here 
    int index = 0;
    vector <string> str;
    string temp = "";
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            str.push_back(temp);
            temp = "";
        }
        else
            temp += s[i];
    }
    str.push_back(temp);
    reverse(str.begin(),str.end());
    string res = "";
    for(int i=0;i<str.size()-1;i++){
        res += str[i] + '.';
    }
    res += str[str.size()-1];
    return res;
} 