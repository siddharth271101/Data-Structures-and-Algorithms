// https://www.interviewbit.com/problems/max-min-05542f2f-69aa-4253-9cc7-84eb7bf739c4/

int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    long long int l,s;
    l = A[A.size()-1];
    s = A[0];
    return (l+s);
}
