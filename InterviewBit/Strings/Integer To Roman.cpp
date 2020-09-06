// https://www.interviewbit.com/problems/integer-to-roman/

string Solution::intToRoman(int A) {
    string Romans[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int nums[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string str = "";
    for(int i=12;i>=0;i--){
        while(A>=nums[i]){
            str += Romans[i];
            A = A - nums[i];
        }
    }
    return str;
}
