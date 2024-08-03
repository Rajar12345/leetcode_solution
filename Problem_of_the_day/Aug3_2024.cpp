class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& A) {
        return unordered_multiset<int>(A.begin(), A.end()) ==
               unordered_multiset<int>(target.begin(), target.end());
    }
};
