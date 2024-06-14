class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int numtrack=0;
        int minIncrement=0;
        for(int i:nums){
            numtrack=max(numtrack,i);
            minIncrement+=numtrack-i;
            numtrack++;
        }
        return minIncrement;
    }
};
