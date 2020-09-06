// https://www.interviewbit.com/problems/longest-palindromic-substring/

string Solution::longestPalindrome(string A) {
    int best_len=0;
    int n = A.length();
    string longest_substr;
    if(n<=1)
        return A;
    for(int mid = 0;mid<n;mid++){
        for(int x = 0;mid-x>=0 && mid+x<n;x++){
            if(A[mid-x]!=A[mid+x])
                break;
            else{
                int len = 2*x+1;
                if(len>best_len){
                    best_len = len;
                    longest_substr = A.substr(mid-x,len);
                }
            }
        }
    }
    
    for(int mid = 0;mid<n-1;mid++){
        for(int x = 1;mid-x+1>=0 && mid+x<n;x++){
            if(A[mid-x+1]!=A[mid+x])
                break;
            else{
                int len = 2*x;
                if(len>best_len){
                    best_len = len;
                    longest_substr = A.substr(mid-x+1,len);
                }
            }
        }
    }
    return longest_substr;
}