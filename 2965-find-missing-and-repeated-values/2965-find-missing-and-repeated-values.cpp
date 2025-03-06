class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> isthere(n*n+1,0);
        vector<int> res(2);
        for( int i = 0 ; i <n;i++){
            for(int j = 0 ; j<n ; j++){
                int num = grid[i][j];
                if(isthere[num]==1){
                    res[0]=num;
                }
                isthere[num] = 1;
            }
        }
        for(int i = 0 ; i < isthere.size();i++){
            if(isthere[i] == 0){
                res[1] = i;
            }
        }
        return res;
    }
};