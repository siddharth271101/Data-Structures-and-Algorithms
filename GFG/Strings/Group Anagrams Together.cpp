// https://practice.geeksforgeeks.org/problems/k-anagrams-1/0

#include <bits/stdc++.h>
using namespace std;

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

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s[n];
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	    }
	    int k=0;
	    vector <int> v;
	    for(int i=0;i<n;i=k){
	        k++;
	        for(int j=i+1;j<n;j++){
	            if(isAnagram(s[i],s[j]))
	                swap(s[k++],s[j]);
	        }
	        v.push_back(k-i);
	    }
	    sort(v.begin(),v.end());
	    for(int i=0;i<v.size();i++){
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	}

	return 0;
}