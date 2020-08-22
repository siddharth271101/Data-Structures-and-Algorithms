// https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/1

#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


// Function to find the transition point
int transitionPoint(int arr[], int n) {
    // code here
    int start = 0;
    int end = n-1;
    while(start<=end){
        if(arr[0]==1)
        return 0;
        if(arr[n-1]==0)
        return -1;
        int mid = start + (end-start)/2;
        if(arr[mid]==0&&arr[mid+1]==1)
        return mid+1;
        if(arr[mid+1]==0)
        start = mid+1;
        else
        end = mid-1;
    }
    return -1;
}