// https://www.interviewbit.com/problems/minimum-parantheses/

int Solution::solve(string A) {

    int count1 = 0;
    int count2 = 0;
    int count = 0;
    for(int i=0;i<A.length();i++){
        if(A[i]=='(')
            count1++;
        if(A[i]==')'){
            if(count1>0)
                count1--;
            else
                count2++;
        }
    }
    return (count1+count2);
    
}
