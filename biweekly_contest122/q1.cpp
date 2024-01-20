class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int sum = 0;
    sum += nums[0];

    std::vector<int> sorted_nums(nums.begin() + 1, nums.end());
    std::sort(sorted_nums.begin(), sorted_nums.end());

    sum += sorted_nums[0];
    sum += sorted_nums[1];

    return sum;
    }
};
