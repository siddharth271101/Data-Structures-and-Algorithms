// https://www.interviewbit.com/problems/matrix-search/ 

int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int i=0;int j=A[A.size()-1].size()-1;
    while(i<A.size() && j>=0)
    {
        if(A[i][j]==B)
            return 1;
        if(A[i][j]<B)
            i++;
        else
            j--;
    }
    return 0;
    
}