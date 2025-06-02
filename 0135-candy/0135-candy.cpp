class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> LTR(n,1);
        vector<int> RTL(n,1);
        int res=0;

        for( int i =1 ; i <n ; i++){
            if(ratings[i] > ratings[i-1]){
               LTR[i] = max(LTR[i] , LTR[i-1]+1);
            }
        }
        for( int i = n-2 ; i>=0 ; i--){
             if(ratings[i] > ratings[i+1]){
               RTL[i] = max(RTL[i] , RTL[i+1]+1);
            }
        }
        for(int  i=0 ;i<n ; i++){
            res += max(LTR[i],RTL[i]);
        }
        return res;
    }
};