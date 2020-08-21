// https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int counter = 0;
    int d2 = 0;
    int d1 = 0;
    for(int i=0;i<A.size()-1;i++){
        if(B[i+1]>B[i]){
            d1 = B[i+1] - B[i];
        }
        else{
            d1 = B[i]-B[i+1];
        }
        if(A[i+1]>A[i]){
            d2 = A[i+1] - A[i];
        }
        else{
            d2 = A[i]-A[i+1];
        }
        
        counter = counter + max(d1,d2);
    }
    return counter;
