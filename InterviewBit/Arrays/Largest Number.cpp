// https://www.interviewbit.com/problems/largest-number/

static bool mycompare(int &num1,int &num2){
    return to_string(num1) + to_string(num2) > to_string(num2) + to_string(num1);
}

string Solution::largestNumber(const vector<int> &arr) {
 vector<int> nums = arr;
 sort(nums.begin(),nums.end(),mycompare);
 string res = "";
 for(int i=0;i<nums.size();i++){
     res += to_string(nums[i]);
 }
 return res[0]== '0' ? "0":res;
}