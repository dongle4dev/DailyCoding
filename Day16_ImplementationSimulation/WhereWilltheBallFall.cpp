    vector<int> findBall(vector<vector<int>>& grid) {
        int numOfBalls = grid[0].size();
        int numOfRows = grid.size();
        int temp = 0, initCol;
        vector<int> ans;
        
        for (int i = 0; i < numOfBalls; ++i) {
            initCol = i;
            bool isFalse = false;
            for (int j = 0; j < numOfRows; ++j) {
                temp = initCol + grid[j][initCol];
                
                if (temp < 0 || temp > numOfBalls - 1 || grid[j][temp] != grid[j][initCol]) {
                    isFalse = true;
                    break;
                }
                
                initCol = temp;
            }
            if (!isFalse)
                ans.push_back(initCol);
            else ans.push_back(-1);
        }
        
        return ans;
    }
