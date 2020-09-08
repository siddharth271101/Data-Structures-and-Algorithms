// https://www.interviewbit.com/problems/add-binary-strings/
//long yet simple
string Solution::addBinary(string A, string B) {
    int n1 = A.length();
    int n2 = B.length();
    int i=n1-1,j=n2-1;
    int carry = 0;
    string str = "";
    while(i>=0 && j>=0)
    {
        int sum = (A[i] - '0') + (B[j] - '0') + carry;
        if(sum == 3)
        {
            str += '1';
            carry = 1;
        }
        if(sum == 2)
        {
            str += '0';
            carry = 1;
        }
        if(sum == 1)
        {
            str += '1';
            carry = 0;
        }
        if(sum == 0)
        {
            str += '0';
            carry = 0;
        }
        i--,j--;
    }
    while(i>=0)
    {
        int sum = A[i] - '0' + carry;
        if(sum == 2)
        {
            str += '0';
            carry = 1;
        }
        if(sum == 1)
        {
            str += '1';
            carry = 0;
        }
        if(sum == 0)
        {
            str += '0';
            carry = 0;
        }
        i--;
    }
    while(j>=0)
    {
        int sum = (B[j] - '0') + carry;
        if(sum == 2)
        {
            str += '0';
            carry = 1;
        }
        if(sum == 1)
        {
            str += '1';
            carry = 0;
        }
        if(sum == 0)
        {
            str += '0';
            carry = 0;
        }
        j--;
    }
    if(carry)
        str += '1';
    reverse(str.begin(),str.end());
    return str;
    
}