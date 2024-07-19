class Solution {
        public List<Integer> luckyNumbers (int[][] matrix) {
        Set<Integer> minSet = new HashSet<>(), maxSet = new HashSet<>();
        for (int[] row : matrix) {
            int mi = row[0];
            for (int cell : row)
                mi = Math.min(mi, cell);
            minSet.add(mi);
        }
        for (int j = 0; j < matrix[0].length; ++j) {
            int mx = matrix[0][j];
            for (int i = 0; i < matrix.length; ++i)
                mx = Math.max(matrix[i][j], mx);
            if (minSet.contains(mx))
                maxSet.add(mx);
        }
        return new ArrayList<>(maxSet);        
    }
}
