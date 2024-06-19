class Solution {
private:
    bool possible(vector<int>& arr, int day, int m, int k) {
        int n = arr.size();
        int cnt = 0;
        int noOfB = 0;
        // count the number of bouquets:
        for (int i = 0; i < n; i++) {
            if (arr[i] <= day) {
                cnt++;
            } else {
                noOfB += (cnt / k);
                cnt = 0;
            }
        }
        noOfB += (cnt / k);
        return noOfB >= m;
    }

public:
    int minDays(vector<int>& A, int m, int k) {
        long long val = m * 1ll * k * 1ll;
        int n = A.size();
        if (val > n)
            return -1;
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            mini = min(mini, A[i]);
            maxi = max(maxi, A[i]);
        }

        // apply binary search:
        int low = mini, high = maxi;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (possible(A, mid, m, k)) {
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return low;
    }
};
