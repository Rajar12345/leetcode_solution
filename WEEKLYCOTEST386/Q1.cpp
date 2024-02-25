
#include <vector>
#include <unordered_map>

bool isPossibleToSplit(const std::vector<int>& nums) {
    std::unordered_map<int, int> freqMap;

    for (int num : nums) {
        freqMap[num]++;
    }

    for (const auto& entry : freqMap) {
        if (entry.second > 2) {
            return false;
        }
    }

    return true;
}
