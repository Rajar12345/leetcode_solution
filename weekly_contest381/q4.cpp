class Solution {
public:
    vector<long long> countOfPairs(int n, int x, int y) {
        if (x > y) swap(x, y);
        vector<long long> ans(n); --x, --y;
        
        int d = y - x + 1;
        if (x != y){
            int m = y - x + 1;
            for (int i = 0; i < m / 2 - 1; i++) ans[i] += m;
            ans[m / 2 - 1] += (m & 1 ? m : m / 2);
            int p = n - m + 2; ans[0]--;
            for (int i = 0; i < p; i++) ans[i] += p - 1 - i;
            vector<long long> diff(n + 1);
            for (int i = x + 1; i < y; i++){
                int r = n - 1 - y, dist = min(y - i, i - x + 1);
                if (r > 0) diff[dist]++, diff[dist + r]--;
            }
            for (int i = y - 1; i > x; i--){
                int l = x, dist = min(y - i + 1, i - x);
                if (l > 0) diff[dist]++, diff[dist + l]--;
            }
            for (int i = 1; i < n; i++) diff[i] += diff[i - 1];
            for (int i = 0; i < n; i++) ans[i] += diff[i];
        }else{
            for (int i = 0; i < n; i++) ans[i] += n - 1 - i;
        }
        for (int i = 0; i < n; i++) ans[i] += ans[i];
        return ans;
    }
};
