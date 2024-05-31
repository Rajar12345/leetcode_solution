class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        // int n=nums.size();
        // vector<int>ans(n);
        // bool flag=false;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]==nums[j])    flag=true;
        //     }
        //     if(flag==false)   ans+=nums[i];
        //     flag=false;
        // }
        // return ans;
        unordered_set<int>visited;
        for(auto &num:nums){
            if(visited.count(num)) visited.erase(num);
            else    visited.insert(num);
        }
        return vector<int>(visited.begin(),visited.end());
    }
};
