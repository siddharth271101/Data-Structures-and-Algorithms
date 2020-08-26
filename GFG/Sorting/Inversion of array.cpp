// https://practice.geeksforgeeks.org/problems/inversion-of-array/0

#include<bits/stdc++.h>
using namespace std;

long long merge(int arr[],int start,int mid,int end)
{
    int i=start;
    int j=mid;
    int k=0;
    int temp[end-start+1];
    long long count=0;
    while((i<mid) && (j<=end))
    {
        if(arr[j]<arr[i])
        {
            temp[k++]=arr[j++];
            count=count+(mid-i);
        }
        else
        {
            temp[k++]=arr[i++];
        }
    }
    while(i<mid)
    {
        temp[k++]=arr[i++];
    }
    while(j<=end)
    {
        temp[k++]=arr[j++];
    }
    for(int i=start,k=0;i<=end;i++,k++)
    {
        arr[i]=temp[k];
    }
    return count;
}
long long merge_sort(int arr[],int start,int end)
{
    long long total_count=0;
   while(start<end)
   {
       int mid=(end+start)/2;
       long long l_count=merge_sort(arr,start,mid);
       long long  r_count=merge_sort(arr,mid+1,end);
       long long  during_merging=merge(arr,start,mid+1,end);
       total_count=l_count+r_count+during_merging;
       return total_count;
   }
   return total_count;
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    int a[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>a[i];
	    }
	    long long inversion_count=merge_sort(a,0,N-1);
	    cout<<inversion_count<<"\n";
	}
	return 0;
}