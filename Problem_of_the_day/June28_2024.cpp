class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> A(n,0);			//For counting the number of edges the given node is part of
        for(int i=0;i<roads.size();i++)
        {
            A[roads[i][0]]++;
            A[roads[i][1]]++;
        }
        sort(A.begin(),A.end());
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=((long long)A[i]*(i+1));
        }
        return ans;
    }
};
