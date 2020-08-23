// https://www.interviewbit.com/problems/square-root-of-integer/

int Solution::sqrt(int A) {
    if(A==0)
    return 0;
    int start = 1;int end = A;
    while(start<end){
        long long int mid = start + (end-start+1)/2;
        if(mid>(A/mid))
        end = mid - 1;
        else 
        start = mid;
    }
    return start;
}
