
// https://www.interviewbit.com/problems/minimum-lights-to-activate/

// Editorial
// re attempt
int Solution::solve(vector<int> &A, int B) {
    int ans=0;
    vector<pair<int,int>> intervals;
    int n=A.size();
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==1)    
            intervals.push_back({max(0,i-B+1),min(n-1,i+B-1)});
    }
    sort(intervals.begin(),intervals.end());
    int i=0;
    int start=0;
    while(i<intervals.size())
    {
        if(intervals[i].first>start)
            return -1;
        int maxend=INT_MIN;
        while(i<intervals.size()&&intervals[i].first<=start)
        {
            if(intervals[i].second>=start)
            {
                maxend=max(intervals[i].second,maxend);
            }
            i++;
        }
        ans++;
        if(maxend>=A.size()-1)
            break;
        start=maxend+1;
    }
    return ans;
}