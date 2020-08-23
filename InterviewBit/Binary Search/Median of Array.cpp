// https://www.interviewbit.com/problems/median-of-array/


    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 int x = A.size();
 int y = B.size();
 
if(x>y)
    return findMedianSortedArrays(B,A);
    
 x = A.size();
 y = B.size();

 int start = 0;
 int end = x;
 int partitionx,partitiony;
 while(start<=end){
     partitionx = start + (end-start)/2;
     partitiony = (x+y+1)/2 - partitionx;
     
     long maxleftx = (partitionx == 0 ? INT_MIN : A[partitionx-1]);
     long minrightx = (partitionx == x ? INT_MAX : A[partitionx]);
     
     long maxlefty = (partitiony == 0 ? INT_MIN : B[partitiony-1]);
     long minrighty = (partitiony == y ? INT_MAX : B[partitiony]);
     
     if(maxleftx <= minrighty && maxlefty <= minrightx){
         if((x+y)%2==0){
             return ((double)max(maxleftx,maxlefty) + min(minrightx,minrighty))/2;
         }
         else{
             return (double)max(maxleftx,maxlefty);
         }
     }
     else{
         if(maxleftx > minrighty)
            end = partitionx - 1;
          else
            start = partitionx+1;
     }
 }
}