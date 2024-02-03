class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int totalCount = 0;
        int n = points.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) 
                    continue;
                
                if (points[i][0] <= points[j][0] && points[i][1] >= points[j][1]) {
                    int isValid = 1;
                    
                    for (int k = 0; k < n; k++) {
                        if (k == i || k == j)
                            continue;

                        if (points[k][0] >= points[i][0] && points[k][0] <= points[j][0] &&
                            points[k][1] <= points[i][1] && points[k][1] >= points[j][1]) {
                            isValid = 0;
                            break;
                        }
                    }

                    if (isValid)
                        totalCount++;
                }
            }
        }

        return totalCount;
    }
};
