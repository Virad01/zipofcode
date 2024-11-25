class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<bool>> grid(n, vector<bool>(n, false));
        for (auto& edge : edges) {
            int i = edge[0], j = edge[1];
            grid[i][j] = grid[j][i] = true;
        }
        
        vector<bool> vis(n, false);
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                vector<int> comp;
                dfs(i, grid, vis, comp);
                
                bool isComplete = true;
                for (int j = 0; j < comp.size(); j++) {
                    for (int k = j+1; k < comp.size(); k++) {
                        if (!grid[comp[j]][comp[k]]) {
                            isComplete = false;
                            break;
                        }
                    }
                    if (!isComplete) {
                        break;
                    }
                }
                
                if (isComplete) {
                    count++;
                }
            }
        }
        
        return count;
    }
    
    void dfs(int i, vector<vector<bool>>& grid, vector<bool>& vis, vector<int>& comp) {
        vis[i] = true;
        comp.push_back(i);
        for (int j = 0; j < grid.size(); j++) {
            if (grid[i][j] && !vis[j]) {
                dfs(j, grid, vis, comp);
            }
        }
    }
};
