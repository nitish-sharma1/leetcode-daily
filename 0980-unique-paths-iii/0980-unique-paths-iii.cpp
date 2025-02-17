class Solution {
public:
    int m,n;
    vector<pair<int,int>> direction= {{0,1},{0,-1},{1,0},{-1,0}};
    int res=0;

    void find(int i , int j , int nonObs , int count ,vector<vector<int>>& grid){
        if(grid[i][j] == 2 && count == nonObs){
            res++;
            return ;
        }
        if(grid[i][j] == 2 && count != nonObs){
            return ;
        }
        int temp = grid[i][j];
        grid[i][j] = 3;
        for(auto dir:direction){
                    int x_ = i + dir.first;
                    int y_ = j + dir.second;
                    if(x_ >=0 && y_ >=0 && x_ <m && y_ < n && grid[x_][y_] !=-1 && grid[x_][y_] != 3  ){
                       find(x_,y_,nonObs,count +1,grid);
                    }
        }
        grid[i][j] = temp;
     
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int nonObs = 0;
        int startx =0 ;
        int starty = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] != -1 ){
                    nonObs++;
                }
                if(grid[i][j] ==1){
                    startx=i;
                    starty=j;
                }
            }
        }
        nonObs--;
        
      
            find(startx,starty,nonObs,0,grid);
        
        return res;
    }
};