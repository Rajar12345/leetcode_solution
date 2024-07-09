class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& A) {
        double wait = 0, cur = 0;
        for (auto& a : A) {
            cur = max(cur, 1.0 * a[0]) + a[1];
            wait += cur - a[0];
        }
        return 1.0 * wait / A.size();
    }
};
