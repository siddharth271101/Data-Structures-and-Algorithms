// https://www.interviewbit.com/problems/woodcutting-made-easy/

int Solution::solve(vector<int> &A, int B) {
sort(A.begin(),A.end());
int count=0,max;
max=A[A.size()-1];
while(count<B)
{
count=0;
for(int i=0;i<A.size();i++)
{
if((A[i]-max)>0)
count+=(A[i]-max);
else
count+=0;
}
max--;
}
return max+1;
}