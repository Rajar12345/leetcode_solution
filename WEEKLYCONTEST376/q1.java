public class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int size = grid.length;
        int[] occurrences = new int[size * size + 1];
        int repeat = -1, missing = -1;
        
        for (int row = 0; row < size; row++) {
            for (int col = 0; col < size; col++) {
                int number = grid[row][col];
                occurrences[number]++;
            }
        }
        
        for (int i = 1; i <= size * size; i++) {
            if (occurrences[i] == 0) {
                missing = i;
            } else if (occurrences[i] == 2) {
                repeat = i;
            }
        }
        
        return new int[]{repeat, missing};
    }
}
