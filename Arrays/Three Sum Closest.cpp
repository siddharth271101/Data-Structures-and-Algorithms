// https://practice.geeksforgeeks.org/problems/product-array-puzzle0852/1

//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> , int );

int main() {
    int t;
    cin >> t;
    while(t--) {
        
        int n,target;
        cin >> n >> target;
        
        vector<int> vec(n);
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> vec[i];
        
        cout << threeSumClosest(vec, target) << "\n";
    }
}


 // } Driver Code Ends


// User function template for C++

// arr : given vector of elements
// target : given sum value

int threeSumClosest(vector<int> arr, int target) {
    // Your code goes here
    sort(arr.begin(),arr.end());
    int min = INT_MAX;
    int n = arr.size();
    for(int i=0;i<n-2;i++){
        int ptr1 = i+1,ptr2 = n-1;
        while(ptr1<ptr2){
            int sum = arr[i] + arr[ptr1] + arr[ptr2];
            if(target==sum)
            return sum;
            if(abs(target-sum)<abs(target-min)){
                min = sum;
            }
            if(abs(target-sum)==abs(target-min)){
                min = max(min,sum);
            }
            if(sum>target)
                ptr2--;
            else
                ptr1++;
        }
    }
    
    return min;
}
