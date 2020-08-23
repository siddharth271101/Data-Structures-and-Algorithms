// https://www.interviewbit.com/problems/search-in-bitonic-array/

int Solution::solve(vector<int> &A, int B) {
    int n = A.size()-1;
    int start = 0;
    int end = n;
    if(A.size()==1)
        if(A[0]==B)
            return 0;
        else
            return -1;
    // if(A[0]<A[n])
    while(start<=end){
        int mid = start + (end-start)/2;
        if(A[mid]==B)
            return mid;
        if(A[mid]>A[mid-1]){
            if(B>A[mid])
                start = mid+1;
            else
                end = mid - 1;
        }
        else{
            if(B>A[mid])
                end = mid-1;
            else
                start = mid+1;
        }
    }
    return -1;
}
