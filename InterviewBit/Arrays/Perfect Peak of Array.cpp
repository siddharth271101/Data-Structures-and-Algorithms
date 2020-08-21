// https://www.interviewbit.com/problems/perfect-peak-of-array/

int Solution::perfectPeak(vector<int> &A) {
int n = A.size();
vector<int> greatest(n);
vector<int> smallest(n);
greatest[0] = A[0];
for(int i=1;i<n;i++){
    greatest[i] = max(greatest[i-1],A[i]);
}
smallest[n-1] = A[n-1];
for(int j=n-2;j>=0;j--){
    smallest[j] = min(smallest[j+1],A[j]);
}
for(int k=1;k<n-1;k++){
    if(A[k]>greatest[k-1] && A[k]<smallest[k+1])
        return 1;
}
return 0;
}