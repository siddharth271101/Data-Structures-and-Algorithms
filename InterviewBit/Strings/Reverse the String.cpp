// https://www.interviewbit.com/problems/reverse-the-string/

    string Solution::solve(string A) {
        stringstream s(A);
        string temp;
        vector<string>v;
        while(s>>temp)
            v.push_back(temp);
        A="";
        for(int i = v.size()-1;i>=0;i--)
            A+=v[i]+" ";
        A.erase(A.end()-1);
        return A;
    }