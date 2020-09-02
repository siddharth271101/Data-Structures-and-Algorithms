// https://www.interviewbit.com/problems/amazing-subarrays/

int Solution::solve(string A) {
    
    transform(A.begin(),A.end(),A.begin(),::tolower);
    int count = 0;
    for(int i=0;i<A.length();i++){
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'){
            count += A.length()-i;
        }
    }
    return (count%10003);
}
