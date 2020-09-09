// https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string-1587115620/1/?track=ppc-recursion&batchId=221

#include<bits/stdc++.h>
using namespace std;

void permutation(string S);

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		permutation(S);
		cout<<endl;
	
	}
	return 0;
}// } Driver Code Ends

void permute(string s,int l,int r)
{
    if(l==r)
        cout<<s<<" ";
    else{
        for(int i=l;i<=r;i++)
        {
            swap(s[l],s[i]);
            sort(s.begin()+l+1,s.end());
            permute(s,l+1,r);
            // sort(s.begin(),s.end());
            swap(s[l],s[i]);
        }
    }
}
//Complete this function
void permutation(string S)
{
    sort(S.begin(),S.end());
    permute(S,0,S.length()-1);
    //Your code here
}