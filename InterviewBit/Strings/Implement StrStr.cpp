// https://www.interviewbit.com/problems/implement-strstr/
// https://practice.geeksforgeeks.org/tracks/ppc-strings/?batchId=221
// https://www.youtube.com/watch?v=V5-7GzOfADQ&t=745s

void compute(string B, int M, int* lps);
int Solution::strStr(const string A, const string B) {
    int M = B.length();
    int N = A.length();
    int lps[M];
    compute(B,M,lps);
    int i=0,j=0;
    while(i<N){
        if(A[i]==B[j]){
            i++;
            j++;
        }
        if(j==M){
            return i-j;
        }
        else if(i<N && A[i]!=B[j])
                {
                    if(j != 0)
                        j = lps[j-1];
                    else
                        i++;
                }
    }
        return -1;
    }
    
    
    void compute(string B, int M, int* lps)
    {
        int i=1;
        int len = 0;
        lps[0] = 0;
        while(i<M){
            if(B[i]==B[len]){
                len++;
                lps[i] = len;
                i++;
            }
            else{
                if(len!=0)
                    len = lps[len-1];
                else{
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
    