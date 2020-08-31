// https://practice.geeksforgeeks.org/problems/roman-number-to-integer/0

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	map <char,int> m;
	m['I'] = 1;
	m['V'] = 5;
	m['X'] = 10;
	m['L'] = 50;
	m['C'] = 100;
	m['D'] = 500;
	m['M'] = 1000;
	string s;
	cin>>s;
	int sum = 0;
	int i;
	for(i=1;i<s.length();i++){
	    if(m[s[i-1]]<m[s[i]])
	        sum = sum - m[s[i-1]];
	    else
	        sum = sum + m[s[i-1]];
	}
	sum += m[s[i-1]];
	cout<<sum<<endl;
	}
	return 0;
}