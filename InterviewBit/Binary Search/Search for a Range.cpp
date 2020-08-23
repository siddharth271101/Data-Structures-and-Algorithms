// https://www.interviewbit.com/problems/search-for-a-range/


vector<int> Solution::searchRange(const vector<int> &A, int B) {
    vector<int> ans;
    int start = 0;
    int end = A.size()-1;
    if(A.size()==1)
        if(A[0]==B){
            ans.push_back(0);
            ans.push_back(0);
            return ans;
        }
        else
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;   
        }
            
    while(start<=end){
        int mid = start + (end - start)/2;
        if(A[mid]==B)
        { 
            while(mid-1>=start && A[mid-1]==B){
                mid--;
            }
            ans.push_back(mid);
            while(mid+1<=end && A[mid+1]==B){
                mid++;
            }
            ans.push_back(mid);
            return ans;
        }
        if(A[mid]>B)
            end = mid-1;
        else
            start = mid + 1;
    }
    ans.push_back(-1);
    ans.push_back(-1);
    return ans;
}