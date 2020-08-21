https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

int Solution::maxSubArray(const vector<int> &A) {

int maxi = A[0];
int current_max = A[0];
for(int i= 1;i<A.size();i++){
    current_max = max(current_max+A[i],A[i]);
    maxi = max(current_max,maxi);
}
return maxi;

}