// https://www.interviewbit.com/problems/palindrome-string/

int Solution::isPalindrome(string A) {

    transform(A.begin(), A.end(), A.begin(), ::tolower);
    string string1="";
    for(int i=0;i<A.length();i++){
        if((A[i]>='a'&&A[i]<='z')||(A[i]>='1'&&A[i]<='9')){
            string1 += A[i];
        }
    }
    string string2="";
    for(int i=string1.length()-1;i>=0;i--){
        string2 += string1[i];
    }
    if(string2==string1)
        return 1;
    else
        return 0;
}