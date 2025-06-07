public:
    vector<vector<int>> generateMatrix(int n) {
         vector<vector<int>> matrix(n, vector<int>(n));
    int idx = 1;
    int srow = 0, scol = 0;
    int erow = n - 1, ecol = n - 1;

    while (srow <= erow && scol <= ecol) {
        // Left to right (top row)
        for (int j = scol; j <= ecol; j++) {
            matrix[srow][j] = idx++;
        }

        // Top to bottom (right column)
        for (int i = srow + 1; i <= erow; i++) {
            matrix[i][ecol] = idx++;
        }

        // Right to left (bottom row)
        if (srow < erow) {
            for (int j = ecol - 1; j >= scol; j--) {
                matrix[erow][j] = idx++;
            }
        }

        // Bottom to top (left column)
        if (scol < ecol) {
            for (int i = erow - 1; i > srow; i--) {
                matrix[i][scol] = idx++;
            }
        }

        srow++;
        erow--;
        scol++;
        ecol--;
    }

    return matrix;
}
        
