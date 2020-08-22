// https://practice.geeksforgeeks.org/problems/index-of-an-extra-element/1

#include <bits/stdc++.h>
using namespace std;
int findExtra(int a[], int b[], int n);
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        cout << findExtra(a, b, n) << endl;
    }
}// } Driver Code Ends


/*Complete the function below*/
int findExtra(int a[], int b[], int n) {
    // add code here.
    int start = 0;
    int end = n-1;
    while(start<=end){
        if(a[0]!=b[0])
        return 0;
        if(a[n-1]!=b[n-2])
        return n-1;
        int mid = start + (end-start)/2;
        if(a[mid]!=b[mid] && a[mid]!=b[mid-1])
        return mid;
        if(a[mid]!=b[mid])
        end = mid-1;
        else
        start = mid+1;
    }
}