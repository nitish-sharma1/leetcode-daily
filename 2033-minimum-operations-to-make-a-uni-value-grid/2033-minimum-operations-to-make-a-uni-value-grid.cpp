class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        
      vector<int> flat;
      int m = grid.size();
      int n = grid[0].size();
      for(int i =0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            flat.push_back(grid[i][j]);
        }
      }
    sort(flat.begin(),flat.end());
    n = flat.size();
    int targetidx = n/2;
    int target = flat[targetidx];
    int res = 0 ;
    for( int num : flat){
        if(num%x != target %x){
            return -1;
        }
        res += abs(num - target) /x;
    }
    return res;
    }
};