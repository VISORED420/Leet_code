class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        bool rowZero = false; // \U0001f539 Tracks if first row needs to be zeroed
        bool colZero = false; // \U0001f539 Tracks if first column needs to be zeroed

        // \U0001f538 Step 1: Check if the first row has any zero
        for (int j = 0; j < cols; j++) {
            if (matrix[0][j] == 0) {
                rowZero = true;
                break; // no need to check further
            }
        }

        // \U0001f538 Step 2: Check if the first column has any zero
        for (int i = 0; i < rows; i++) {
            if (matrix[i][0] == 0) {
                colZero = true;
                break;
            }
        }

        // \U0001f538 Step 3: Use first row and column as markers
        // If matrix[i][j] == 0, mark its row and column in first row/col
        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0; // mark row
                    matrix[0][j] = 0; // mark column
                }
            }
        }

        // \U0001f538 Step 4: Zero out cells based on markers (excluding first row/column)
        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // \U0001f538 Step 5: Zero out the first row if needed
        if (rowZero) {
            for (int j = 0; j < cols; j++) {
                matrix[0][j] = 0;
            }
        }

        // \U0001f538 Step 6: Zero out the first column if needed
        if (colZero) {
            for (int i = 0; i < rows; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};
