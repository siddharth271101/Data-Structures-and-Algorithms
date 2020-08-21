// https://www.interviewbit.com/problems/anti-diagonals/
// Editorial
vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>> B(2*A.size()-1);
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A.size();j++){
                B[i+j].push_back(A[i][j]);
            }
    
        }
    return B;
}