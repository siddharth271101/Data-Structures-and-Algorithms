// https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string/0

#include <bits/stdc++.h>
using namespace std;
vector <string> ans;
void permute(string str,int l,int r)
{
    if(l==r)
        ans.push_back(str);
    else{
        for(int i=l;i<=r;i++)
        {
            swap(str[l],str[i]);
            permute(str,l+1,r);
            swap(str[l],str[i]);
        }
            
    }
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    sort(str.begin(),str.end());
	    permute(str,0,str.length()-1);
	    sort(ans.begin(),ans.end());
	    for(int i=0;i<ans.size();i++)
	        cout<<ans[i]<<" ";
	    ans.clear();
	    cout<<endl;
	}
	return 0;
}