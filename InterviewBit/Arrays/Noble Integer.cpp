// https://www.interviewbit.com/problems/noble-integer/

sort(nums.begin(),nums.end());
if(nums[nums.size()-1]==0)
return 1;
for(int i=0;i<nums.size();i++){
    if(i+1>nums.size()&&nums[i]==nums[i+1])
    continue;
    if(nums[i]>=0){
    if(nums[i] == nums.size()-i-1)
      return 1;
    }
}
return -1;
}