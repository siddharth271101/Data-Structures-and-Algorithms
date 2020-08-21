// https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/

vector<int> Solution::getRow(int A) {
    vector<vector<int>> v(A+1);
    vector<int> B;
    for(int i=0;i<=A;i++){
        v[i].resize(i+1);
        v[i][i] = v[i][0] = 1;
        for(int j=1;j<i;j++){
            v[i][j] = v[i-1][j-1] + v[i-1][j];
        }
    }
    for(int k= 0;k<=A;k++){
        B.push_back(v[A][k]);
    }
    return B;
vector <int> a;
int i = A + 1, b = 1;
for(int j=1; j<=i; j++)
{
    a.push_back(b);
    b = b*(i - j)/j;
}
return a;

}