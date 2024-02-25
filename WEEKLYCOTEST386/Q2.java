class Solution {
    public long largestSquareArea(int[][] bottomLeft, int[][] topRight) {
        int n = bottomLeft.length;
        long maxArea = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int x1 = Math.max(bottomLeft[i][0], bottomLeft[j][0]);
                int y1 = Math.max(bottomLeft[i][1], bottomLeft[j][1]);
                int x2 = Math.min(topRight[i][0], topRight[j][0]);
                int y2 = Math.min(topRight[i][1], topRight[j][1]);

                if (x1 < x2 && y1 < y2) {
                    int side = Math.min(x2 - x1, y2 - y1);
                    maxArea = Math.max(maxArea, (long) side * side);
                }
            }
        }

        return maxArea;
    }
}
