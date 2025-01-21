#include <algorithm>
class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
          long long n=grid[0].size();
        vector<vector<long> > presum(2,vector<long> (n));
       
      
        presum[0][0]=grid[0][0];
        presum[1][0]=grid[1][0];

      


          for( int i =1; i < n;i++)
          {
              presum[0][i] =presum[0][i-1]+grid[0][i];
               presum[1][i] =presum[1][i-1]+grid[1][i];

              
          }

long long res=10000000000;


         
            for( int i =0; i < n;i++)
          {
              long long top= presum[0][n-1]-presum[0][i];
              long long bottom=0;
              if(i>0){
                bottom=presum[1][i-1];
              }
              long long second=max(top,bottom);
              res=min(res,second);
              
          }


          return res;
        


        
    }
};