class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> temp = matrix;

        for(int i = 0 ; i < m ; i++){
            for(int j=0;j<n;j++){

                if(temp[i][j] == 0 ){
                    
                    for(int c = 0 ; c < n ; c++){
                        matrix[i][c] = 0 ;
                        
                    }
                    for(int c = 0 ; c < m ; c++){
                        matrix[c][j]=0;
                        cout<<c<<" "<<j <<endl;
                    }
                     
                }
               
            }
        }
        
    }
};