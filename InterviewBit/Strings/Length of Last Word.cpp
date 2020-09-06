// https://www.interviewbit.com/problems/length-of-last-word/

int Solution::lengthOfLastWord(const string A) {
    if(A==" " || A=="")
    return 0;
    
    int ans=0;
    for(int i=A.size()-1;i>=0;i--)
    {
        if(A[i]==' ' && ans!=0)
        break;
        if(A[i]==' ' && ans==0)
        continue;
        else ans++;
        
    }
return ans;
}