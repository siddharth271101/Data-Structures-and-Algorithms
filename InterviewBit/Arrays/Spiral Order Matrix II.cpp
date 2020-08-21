// https://www.interviewbit.com/problems/spiral-order-matrix-ii/

vector<vector<int> > Solution::generateMatrix(int A) {
vector<vector<int>> B(A, vector(A, 0));
    int m = A;
    int n=A;
    int i=0;int j=0;
    int count=0;
    while(i<m&&j<n){
        for(int p=j;p<n;p++){
            count++;
            B[i][p] = count;
        }
        i++;
        for(int p=i;p<m;p++){
            count++;
            B[p][n-1] = count;
        }
        n--;
        if(i<m){
            for(int p=n-1;p>=j;p--){
                count++;
                B[m-1][p] = count;
            }
            m--;
        }
        if(j<n){
            for(int p=m-1;p>=i;p--){
                count++;
                B[p][j] = count;
            }
            j++;
        }
    }
    return B;
}