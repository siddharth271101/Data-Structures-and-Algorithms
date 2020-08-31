// https://practice.geeksforgeeks.org/problems/multiply-two-strings/1/?track=ppc-strings&batchId=221
// https://www.geeksforgeeks.org/multiply-large-numbers-represented-as-strings/
#include<bits/stdc++.h>
using namespace std;
 
string multiplyStrings(string , string );
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	
    	cout<<multiplyStrings(a,b)<<endl;
    }
     
}// } Driver Code Ends


/*You are required to complete below function */
string multiplyStrings(string s1, string s2) {
   //Your code her
if(s1=="0"||s2=="0")
   return "0";   
if((s1.at(0) == '-' || s2.at(0) == '-') && 
		(s1.at(0) != '-' || s2.at(0) != '-' )) 
		cout<<"-"; 


	if(s1.at(0) == '-' && s2.at(0)!='-') 
		{ 
			s1 = s1.substr(1); 
		} 
		else if(s1.at(0) != '-' && s2.at(0) == '-') 
		{ 
			s2 = s2.substr(1); 
		} 
		else if(s1.at(0) == '-' && s2.at(0) == '-') 
		{ 
			s1 = s1.substr(1); 
			s2 = s2.substr(1); 
		} 
    int len1 = s1.length();
    int len2 = s2.length();

    vector <int> res(len1+len2,0);
    int i_n1 = 0;
    int i_n2 = 0;
    for(int i = len1-1;i>=0;i--){
        int n1 = s1[i] - '0';
        int carry = 0;
        i_n2 = 0;
        for(int j = len2-1;j>=0;j--){
            int n2 = s2[j] - '0';
            int sum = n1*n2 + res[i_n1 + i_n2] + carry;
            carry = sum/10;
            res[i_n1 + i_n2] = sum %10;
            i_n2++;
        }
        if(carry>0)
            res[i_n1 + i_n2] += carry;
        i_n1++;
    }
    string str = "";
    int i = len1+len2-1;
    while(res[i]==0)
        i--;
    while(i>=0)
        str += to_string(res[i--]);
return str;
}
