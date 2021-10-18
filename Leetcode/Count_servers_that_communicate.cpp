class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int answer = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<int>rows(n);
        vector<int>columns(m);
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j]) {
                    rows[i]++;
                    columns[j]++;
                }
            }
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] && (rows[i] > 1 || columns[j] > 1)) {
                    answer++;
                }
            }
        }
        return answer;
    }
};