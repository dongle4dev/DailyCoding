    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<vector<int>> direction {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int numOfRows = matrix.size();
        int numOfCols = matrix[0].size();
        
        vector<int> res;
        vector<int> numOfSteps {numOfCols, numOfRows - 1};
        int curDir = 0, curRow = 0, curCol = -1; 
        
        while (numOfSteps[curDir % 2]) {
            for (int i = 0; i < numOfSteps[curDir % 2]; ++i) {
                curCol += direction[curDir][1];
                curRow += direction[curDir][0];
                
                res.push_back(matrix[curRow][curCol]);
            }
            numOfSteps[curDir % 2]--;
            curDir = (curDir + 1) % 4;
        }
        return res;
    }
