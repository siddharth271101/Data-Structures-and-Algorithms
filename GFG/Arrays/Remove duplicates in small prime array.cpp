// https://practice.geeksforgeeks.org/problems/remove-duplicates-in-small-prime-array/1

#include<bits/stdc++.h>
using namespace std;
vector<int> removeDuplicate(vector<int>& arr, int n);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        vector<int>result = removeDuplicate(A,N);
        for(int i =0;i<result.size();i++)
            cout<<result[i]<<" ";
        cout<<endl;

    }
}
// } Driver Code Ends


vector<int> removeDuplicate(vector<int>& arr, int n)
{
    // code here
    unordered_map<int,int> res;
        for(int i=0;i<arr.size();i++){
            res[arr[i]]++;
        }
        vector<int> v;
        for(int j=0;j<arr.size();j++){
            if(res[arr[j]] > 0){
            v.push_back(arr[j]);
            res[arr[j]] = 0;
            }
        }
        return v;
}

