class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size();
        long long firstsum =0;
        
        for( int i = 0 ; i < n ;i++){
            firstsum += grid[0][i];
        }
        long long secondsum =0;
        
        long long firstbotres =0 ;
        long long res = LONG_LONG_MAX;
        for( int i = 0 ; i < n ; i++){
            firstsum -=grid[0][i];
           firstbotres = max(secondsum , firstsum);
           secondsum += grid[1][i];
           res = min ( res , firstbotres);
        }

        return res;
    }
};