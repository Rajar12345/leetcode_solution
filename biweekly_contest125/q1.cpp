int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int index=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=k){
                index=i;
                break;
            }
        }
        return index;
    }
