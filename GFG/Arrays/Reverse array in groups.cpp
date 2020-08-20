// https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to reverse the array in groups
vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
    // your code here

    for(int i = 0;i<n;i=i+k){
        int start = i;
        int end = min(n-1,i+k-1);
        while(start<end){
            int temp = mv[start];
            mv[start] = mv[end];
            mv[end] = temp;
            start++;
            end--;
        }
    }
    return mv;
}


// { Driver Code Starts.

int main() {
    
    int t; //Testcases
    cin >> t; //input the number of testcases

    while(t--){ //while testcases exist

        int n;
        cin >> n; //input the size of array
        
        vector<long long> mv; // Declaring a vector mv
        
        int k;
        cin >> k; //input k 

        for(long long i =0;i<n;i++){
            long long x;
            cin >> x; //input element of array

            mv.push_back(x); //push the element into vector
        }
        
        mv = reverseInGroups(mv, n, k);
        
        for(long long i =0;i<n;i++){
            cout << mv[i] << " "; //Just print the vector
        }

        cout << endl;
        
       

    }

}
  // } Driver Code Ends