class Solution {
public:
    void dfs(vector<vector<char>>& grid, int row, int column) {
        //boundary checking
        if (row < 0 || row >= grid.size() || column < 0 || column >= grid[0].size() || grid[row][column] == '0')
            return;
        
        //mark island is visited
        grid[row][column] = '0';
        
        dfs(grid, row + 1, column);
        dfs(grid, row - 1, column);
        dfs(grid, row, column + 1);
        dfs(grid, row, column -1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int numberOfIsland = 0;
        int row = grid.size(), column = grid[0].size();
        
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < column; ++j) {
                if (grid[i][j] == '1') {
                    dfs(grid, i, j);
                    numberOfIsland++;
                }
            }
        }
        
        return numberOfIsland;
    }
};
