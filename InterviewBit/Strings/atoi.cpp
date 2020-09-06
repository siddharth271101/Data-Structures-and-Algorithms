// https://www.interviewbit.com/problems/atoi/

int Solution::atoi(const string A) {
    long long int x=0;
    int flag=1;
    int i=0;
    if(A[0]=='-')
    {
        flag=-1;
        i++;
    }
    if(A[0]=='+')
    {
        flag=1;
        i++;
    }
    for(;i<A.size();i++)
    {
        
        if(A[i]>='0' && A[i]<='9')
            x=x*10+A[i]-'0';
        else 
            break;
        
        if(x>INT_MAX)
            return flag==-1?INT_MIN:INT_MAX;
    }
    return (int)flag*x;
}