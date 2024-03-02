class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        int n=nums.size();
        vector<int> lis[n];
        for(int i=0;i<n-1;i++)
        {
            lis[edges[i][0]].push_back(edges[i][1]);
            lis[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> inc;
        for(int i=0;i<n;i++)
        {
            long long val=(long long)nums[i]^k;
            if(val>nums[i])
            {
                inc.push_back(i);
            }
        }
        // cout<<inc.size()<<endl;
        int sz=inc.size();
        if(sz%2==0)
        {
            long long ans=0;
            for(int i=0;i<n;i++)
            {
                ans+=nums[i];
            }
            for(int i=0;i<inc.size();i++)
            {
                ans-=nums[inc[i]];
                long long add=(long long)nums[inc[i]]^k;
                ans+=add;
            }
            return ans;
        }
        else
        {
            long long ans=0;
            for(int i=0;i<n;i++)
            {
                ans+=(long long)nums[i];
            }
            long long hue=ans;
            
            for(int i=0;i<inc.size();i++)
            {
                ans-=nums[inc[i]];
                long long add=(long long)nums[inc[i]]^k;
                ans+=add;
            }
            for(int i=0;i<sz;i++)
            {
                long long add=(long long)nums[inc[i]]^k;
                long long curr_ans=ans-add+nums[inc[i]];
                hue=max(hue,curr_ans);
            }
            
            vector<int> vis(n,0);
            long long sum=0;
            for(int i=0;i<sz;i++)
            {
                vis[inc[i]]=1;
            }
            for(int i=0;i<n;i++)
            {
                if(vis[i]==0)
                {
                    long long add=(long long)nums[i]^k;
                    long long curr_ans=ans-nums[i]+add;
                    hue=max(hue,curr_ans);
                }
            }
           
           
            return hue;
        }
    }
};
