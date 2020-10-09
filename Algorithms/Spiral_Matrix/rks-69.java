class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
		List<Integer> result = new ArrayList<>();
		if(matrix == null || matrix.length == 0 || matrix[0].length== 0)
			return result;
		int lastRow = matrix.length-1;
		int lastCol = matrix[0].length-1;
		int firstRow = 0;
		int firstCol = 0;

		while(firstRow<=lastRow && firstCol<=lastCol) {
			//Print first row
			for (int i = firstCol; i <= lastCol; i++) {
				result.add(matrix[firstRow][i]);
			}
			firstRow++;

			//Print last column
			for (int i = firstRow; i <= lastRow; i++) {
				result.add(matrix[i][lastCol]);
			}
			lastCol--;

			//Print last row & first column
			if(lastRow>=firstRow && lastCol>=firstCol) {
				for (int i = lastCol; i >= firstCol; i--) {
					result.add(matrix[lastRow][i]);
				}
				lastRow--;

				for (int i = lastRow; i >= firstRow ; i--) {
					result.add(matrix[i][firstCol]);
				}
				firstCol++;
			}
		}
		return result;
    }
}