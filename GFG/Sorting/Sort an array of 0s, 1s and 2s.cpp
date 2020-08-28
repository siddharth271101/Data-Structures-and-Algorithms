// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1/?track=ppc-search-sort&batchId=221

#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

// } Driver Code Ends


void sort012(int a[], int n)
{
    // coode here

    int x = 0,y = n-1;
    int z=0;
    while(x<=y){
        if(a[x] == 0)
        {  swap(a[x],a[z]);
            x++;
            z++;
        }
        else
        {
            if(a[x]==1)
                x++;
            else if(a[x]==2){
                    swap(a[x],a[y]);
                    y--;
            }
        }
                
    }
}