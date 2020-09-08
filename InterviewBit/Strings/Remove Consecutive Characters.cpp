// https://www.interviewbit.com/problems/remove-consecutive-characters/

string Solution::solve(string A, int B) {
    if(A.length()<=1)
        return A;
    int count = 1;
    string str = "";
    for(int i=0;i<A.length();i++)
    {
        if(A[i]==A[i+1])
            count++;
        else
        {
            if(count == B)
                count = 1;
            else
            {
                str += A[i]*count;
                count = 1;
            }
        }
    }
   return str;
}