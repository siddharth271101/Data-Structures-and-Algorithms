// https://www.interviewbit.com/problems/valid-number/

int Solution::isNumber(const string A) {
    int exp_flag=0,flag=0;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]==' ')
            continue;
        if(A[i]=='.')
        {   if((A[i+1]>='0'&&A[i+1]<='9'))
                if(exp_flag==0)
                    continue;
            return 0;
        }
        if(A[i]=='e')
        {
            exp_flag=1;
            continue;
        }
        if(A[i]=='-')
            continue;
        if(A[i]>='0' && A[i]<='9'){
            flag=1;
            continue;
        }
        else
            return 0;
    }
    if(flag==1)
        return 1;
    else
        return 0;
}