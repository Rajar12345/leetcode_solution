class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        map<int, vector<int>> mp;
        vector<long long> ps(nums.size());
        ps[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            ps[i] = ps[i - 1] + nums[i];
        }
        long long maxsum = LONG_MIN;
        bool present = false;
        long long ans;

        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(nums[i] - k) != mp.end()) {
                present = true;
                for (auto x : mp[nums[i] - k]) {
                    if (x == 0)
                        ans = ps[i];
                    else
                        ans = ps[i] - ps[x - 1];
                    maxsum = max(maxsum, ans);
                }
            }
            if (mp.find(nums[i] + k) != mp.end()) {
                present = true;
                for (auto x : mp[nums[i] + k]) {
                    if (x == 0)
                        ans = ps[i];
                    else
                        ans = ps[i] - ps[x - 1];
                    maxsum = max(maxsum, ans);
                }
            }
            mp[nums[i]].push_back(i);
        }
        return present ? maxsum : 0;
    }
};
