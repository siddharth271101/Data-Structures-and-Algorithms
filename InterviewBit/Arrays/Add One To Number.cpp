https://www.interviewbit.com/problems/add-one-to-number/

vector<int> Solution::plusOne(vector<int> &A) {
    reverse(A.begin(),A.end());
    vector<int> B;
    int n = A.size();
    int carry = 1;
    for(int i=0;i<n;i++){
        int sum = A[i]+carry;
        B.push_back(sum%10);
        carry = sum/10;
    }
    while(carry){
        B.push_back(carry%10);
        carry = carry/10;
    }

     
    while(B[B.size()-1]==0 && B.size()>1){
        B.pop_back();
    } 
    reverse(B.begin(),B.end());

    return B;
}
