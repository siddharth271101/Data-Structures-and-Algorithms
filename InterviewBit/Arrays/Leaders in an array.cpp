// https://www.interviewbit.com/problems/leaders-in-an-array/

vector<int> Solution::solve(vector<int> &A) {
    vector<int> B;
    for(int i=0;i<A.size();i++){
        int flag=0;
        for(int j=i+1;j<A.size();j++){
            if(A[i]<A[j]){
            flag=1;
            break;
            }
        }
        if(flag==0){
            B.push_back(A[i]);
        }
    }
    return B;
}
