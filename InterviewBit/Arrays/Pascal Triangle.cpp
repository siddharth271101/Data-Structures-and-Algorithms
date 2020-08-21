// https://www.interviewbit.com/problems/pascal-triangle/

vector<vector<int> > Solution::solve(int n) {
    vector<vector<int>> a(n);
for(int i=0;i<n;i++){
    a[i].resize(i+1);
    a[i][i] = a[i][0] = 1;
    for(int j=1;j<i;j++){
        a[i][j] = a[i-1][j-1]+a[i-1][j];
    }
}
return a;
}